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
        int nodenum, tempdata;
        struct Node *tmp,*nextnode;

        // Displaying the purpose of the program
        printf("\n\n Linked List : To create and display Singly Linked List :\n");
        printf("-------------------------------------------------------------\n");

        // Inputting the number of nodes for the linked list
        printf(" Input the number of nodes : ");
        scanf("%d", &nodenum);
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
        printf("The created linked list is : \n");
        while(tmp != NULL)
        {
            printf("%d  ", tmp->data); // Printing the data of the current node
            tmp = tmp->nextptr;               // Moving to the next node in the list
        }
        cout<<endl;
    }
}

int main()
{
    cout << "Hello world!" << endl;

    createNode();
    displayList();

    return 0;
}
