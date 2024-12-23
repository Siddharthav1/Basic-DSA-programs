/********************
file name   : main.cpp
Author      : Siddhartha V
version     : 1.0
Description : ArraY_ADT : Reverse,Shift, Rotate
Copyright   :
********************/

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};


int Create(struct Array *arr)
{

    int length1;
    cout << "Enter number of elements: " << endl;
    cin >> length1;
    arr->length=length1;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < length1; i++)
    {
        cout << "Array element: " << i << " = ";
        cin >> arr->A[i];
        cout<<endl;
    }
    cout << "Array element are: "<<endl;;
    for (int j = 0; j < length1; j++)
    {
        cout<<arr->A[j]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    return 0;
}

void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}

void Reverse_auxiallury(struct Array arr){

int arraylength = arr.length;
int Myarray[arraylength];
int TempArray[arraylength];

for(auto i=0;i<arraylength;i++){
    Myarray[i]=arr.A[i];
}
    cout << "Array element are Before reverse: "<<endl;;
    for (int j = 0; j < arraylength; j++)
    {
        cout<<Myarray[j]<<" ";
    }
    cout<<endl<<endl;
    for(int i=(arraylength-1),j=0;i>=0;i--,j++)
    {
        TempArray[j]=Myarray[i];
    }
    cout << "Array element are Before reverse: "<<endl;;
    for (int j = 0; j < arraylength; j++)
    {
        cout<<TempArray[j]<<" ";
    }
     cout<<endl<<endl;
}

void Interchange_auxiallury(struct Array arr){

int arraylength = arr.length;
int Myarray[arraylength];

for(auto i=0;i<arraylength;i++){
    Myarray[i]=arr.A[i];
}
    cout << "Array element are Before reverse: "<<endl;;
    for (int j = 0; j < arraylength; j++)
    {
        cout<<Myarray[j]<<" ";
    }
    cout<<endl<<endl;
    for(int i=0,j=(arraylength-1);i<j;i++,j--)
    {
        swap(&Myarray[i],&Myarray[j]);
    }
    cout << "Array element are Before reverse: "<<endl;
    for (int j = 0; j < arraylength; j++)
    {
        cout<<Myarray[j]<<" ";
    }
     cout<<endl<<endl;
}


void r_shift(struct Array *arr)//right shift
{
    for(int j=(arr->length-1);j>0;j--)
        arr->A[j]=arr->A[j-1];
    arr->A[0]=0;
cout << "Array element are After Right shift are : "<<endl;
}

void r_shift_r(struct Array *arr)//right shift roatation
{
    for(int i=0;i<arr->length;i++)
    {
        int temp=arr->A[arr->length-1];
        for(int j=(arr->length-1);j>0;j--)
            arr->A[j]=arr->A[j-1];
        arr->A[0]=temp;
    }
    cout << "Array element are After Right shift Rotation are : "<<endl;
}
void l_shift(struct Array *arr)//left shift
{
    for(int j=1;j<(arr->length);j++)
        arr->A[j-1]=arr->A[j];
    arr->A[arr->length-1]=0;
cout << "Array element are After Left shift are : "<<endl;
}

void l_shift_r(struct Array *arr)//left shift roatation
{
    for(int i=1;i<=(arr->length);i++)
    {
        int temp=arr->A[0];
        for(int j=1;j<(arr->length);j++)
            arr->A[j-1]=arr->A[j];
        arr->A[(arr->length)-1]=temp;
    }
    cout << "Array element are After Left shift Rotation are : "<<endl;

}

void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        std::cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    struct Array arr;

    Create(&arr);

Reverse_auxiallury(arr);
Interchange_auxiallury(arr);

r_shift_r(&arr);Display(arr);
l_shift_r(&arr);Display(arr);
l_shift(&arr);Display(arr);
r_shift(&arr);Display(arr);
    return 0;

}

