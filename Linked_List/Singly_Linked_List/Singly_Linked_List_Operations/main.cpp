/********************
file name   : main.cpp
Author      : Siddhartha V
version     : 1.0
Description : Singly Linked List
Copyright   :
********************/

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


struct Node
{
    int data;
    struct Node *nextptr;
};

struct Node *head=0;
int list_size;

void createNode();
void displayList();
void begin_insert();
void end_insert();
void position_insert(int list_size);
void begin_delete();
void end_delete();
void position_delete(int list_size);
bool search_element();


int main()
{
    cout << "Hello world!" << endl;

    createNode();
    displayList();
    int choice = 0;
    while (choice != 9)
    {
        printf("\n...Choose One Option from the following List...\n");
        printf("\nl.Insert in begining\n2.Insert at last\n3.Insert item at any location\n4.Delete from Beginning\n5.Delete from last\n6.Delete item from any location\n7.Search\n8.Exit\n");

        printf("\nEnter your choice: ");
        scanf("\n%d", &choice); // choice=1

        switch (choice)
        {
        case 1:
            begin_insert();
            break;
        case 2:
            end_insert();
            break;
        case 3:
            position_insert(list_size);
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            end_delete();
            break;
        case 6:
            position_delete(list_size);
            break;
        case 7:
            search_element();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Invalid Choice..");
        }
    }
    return 0;
}

void createNode()
{
    // Allocating memory for the starting node
    head=(struct Node *)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        printf("Memory cannot be created head is NULL \n");
    }
    else
    {
        int nodenum;
        int  tempdata;
        struct Node *tmp,*nextnode;

        // Displaying the purpose of the program
        printf("\n\n Linked List : To create and display Singly Linked List :\n");
        printf("-------------------------------------------------------------\n");

        // Inputting the number of nodes for the linked list
        printf(" Input the number of nodes : ");
        scanf("%d", &nodenum);
        list_size=nodenum;
        // Reading data for the starting node from user input
        printf(" Input data for node 0 : ");
        scanf("%d", &tempdata);
        head->data=tempdata;
        head->nextptr=NULL;
        tmp = head;

        // Creating n nodes and adding them to the linked list
        for(auto i=1; i<nodenum; i++)
        {
            // Allocating memory for the nextnode node
            nextnode=(struct Node *)malloc(sizeof(struct Node));

            if(nextnode==NULL)
            {
                printf("List cannot be created temp * t is NULL \n");
            }
            else
            {
                // Reading data for each node from user input
                printf(" Input data for node %d : ", i);
                scanf(" %d", &tempdata);

                nextnode->data = tempdata;      // Setting the data for nextnode
                nextnode->nextptr = NULL; // Setting the next pointer to NULL

                tmp->nextptr = nextnode;  // Linking the current node to nextnode
                tmp = tmp->nextptr;     // Moving tmp to the next node
            }

        }

    }

}


// Function to display the linked list
void displayList()
{
    struct Node *tmp;

    if(head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = head;

        // Traversing the linked list and printing each node's data
        printf("\nThe created linked list is : \n");
        while(tmp != NULL)
        {
            printf("%d  ", tmp->data); // Printing the data of the current node
            tmp = tmp->nextptr;               // Moving to the next node in the list
        }
        cout<<endl;
    }
}

void begin_insert()
{
    struct Node *ptr;
    int item;
    ptr = (struct Node *)malloc(sizeof(struct Node *));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->nextptr = head;
        head = ptr;
        printf("Item inserted\n");
    }
    displayList();
}

void end_insert()
{
    struct Node *ptr,*temp;
    int item;
    ptr = (struct Node *)malloc(sizeof(struct Node *));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->nextptr=NULL;
        temp=head;
        while(temp->nextptr!= NULL)
        {
            temp=temp->nextptr;
        }

        ptr->nextptr=temp->nextptr;
        temp->nextptr=ptr;
        printf("Item inserted\n");
    }
    displayList();
}

void position_insert(int list_size)
{
    struct Node *ptr,*temp;
    int item, position;
    ptr = (struct Node *)malloc(sizeof(struct Node *));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\n The size of list is %d Enter the position to insert: ",list_size);
        scanf("%d", &position);
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data = item;
        temp=head;
        for(auto i=0; i<position-1; i++)
        {
            temp=temp->nextptr;
        }

        ptr->nextptr=temp->nextptr;
        temp->nextptr=ptr;
        printf("Item inserted\n");
    }
    displayList();
}

void begin_delete()
{
    struct Node *ptr;
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        ptr = head;
        head = ptr->nextptr;
        free(ptr);
        printf("Item deleted from the begining ...\n");
    }
    displayList();
}

void end_delete()
{
    struct Node *ptr,*temp;
    int  position=0;
    ptr=head;
    while (ptr->nextptr!=NULL)
    {
        temp = ptr;
        position++;
        ptr = ptr->nextptr;
    }
    temp->nextptr = NULL;
    free(ptr);
    printf("\nItem deleted at position %d", position);
    displayList();
}

void position_delete(int list_size)
{
    struct Node *ptr,*temp;
    int  position;

    printf("\n The size of list is %d Enter the position to be deleted: ",list_size);
    scanf("%d", &position);

    ptr=head;
    for (auto i = 0; i < position; i++)
    {
        temp = ptr;
        ptr = ptr->nextptr;
        if (ptr == NULL)
        {
            printf("\nCan't delete");
            return;
        }
    }
    temp->nextptr = ptr->nextptr;
    free(ptr);
    printf("\nItem deleted at position %d", position);

    displayList();
}

bool search_element()
{
    struct Node *ptr;
    int element, position=0;
    ptr=head;
    printf("\nEnter value: ");
    scanf("%d", &element);
    while(ptr!=NULL)
    {
        int data1=ptr->data;
        if(data1==element)
        {
            printf("\nElement was  found at %dth psitin.........!!!!!!!", position);
        }
        else
        {

        }
        position++;
        ptr = ptr->nextptr;
    }
    return 0;
}

