/********************
file name   : main.cpp
Author      : Siddhartha V
version     : 1.0
Description : ArraY_ADT : Linear Search
Copyright   :
********************/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Array {
    int A[10];
    int length;
    int size;
};

void Display(struct Array arr){
    int Array_length=arr.length;
    cout<<"Array Elements Are : "<<endl;
    for(int i=0;i<Array_length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int Linearsearch_Transpose(struct Array arr, int value)
{
    int length1=arr.length;
    for(int i=0;i<length1;i++)
    {
        if(arr.A[i]==value)
        {
            if(i>0)
            {
                int t=arr.A[i-1];//Transpose method to improve linear search
                arr.A[i-1]=arr.A[i];
                arr.A[i]=t;
            }
            return i;
        }
    }
    return -1;
}

int Linearsearch_MoveToHead(struct Array arr, int value)
{
    int length1=arr.length;
    for(int i=0;i<length1;i++)
    {
        if(arr.A[i]==value)
        {
            if(i>0)
            {
                int t=arr.A[0];//MoveToHead method to improve linear search
                arr.A[0]=arr.A[i];
                arr.A[i]=t;
            }
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr={{1,3,5,7,9},5,10};
    Display(arr);
    printf("The index of the searched element with Linearsearch_Transpose is  : %d \n",Linearsearch_Transpose(arr,3));
    printf("The index of the searched element with Linearsearch_MoveToHead is : %d \n",Linearsearch_MoveToHead(arr,3));

return 0;
}







