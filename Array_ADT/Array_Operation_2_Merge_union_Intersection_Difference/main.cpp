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

struct Array1
{
    int A[10];
    int length;
    int size;
};

struct Array2
{
    int A[10];
    int length;
    int size;
};

int Create(struct Array1 *arr1,struct Array2 *arr2)
{

    int length1;
    int length2;
    cout << "Enter number of elements for Array1: " ;
    cin >> length1;
    arr1->length=length1;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < length1; i++)
    {
        cout << "Array element: " << i << " = ";
        cin >> arr1->A[i];
    }

    cout << "Enter number of elements for Array2: " << endl;
    cin >> length2;
    arr2->length=length2;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < length2; i++)
    {
        cout << "Array element: " << i << " = ";
        cin >> arr2->A[i];
    }

    cout<<endl;

    return 0;
}

void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}

void Display(int arr[],int l)
{
    cout << "Final Array element are: "<<endl;;
    for(int i=0;i<l;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void Merge_Array(struct Array1 arr1,struct Array2 arr2){

int l1=arr1.length;
int l2=arr2.length;
int mergelength=l1+l2;
int mergearray[mergelength];

int temp1[l1];
int temp2[l2];

auto i=0,j=0,k=0; //i>Indexpointer for temp1;j>Indexpointer for temp2;k>Indexpointer for mergelength;

while((i<l1)&&(j<l2)){
for(auto p=0;p<l1;p++){
    temp1[p]=arr1.A[p];
}
for(auto q=0;q<l2;q++){
    temp2[q]=arr2.A[q];
}

if(temp1[i]<temp2[j]){
    mergearray[k++]=temp1[i++];
   // i++;k++;
}
else{
    mergearray[k++]=temp2[j++];
   // j++;k++;
}
}
for( ;i<l1;i++){
    mergearray[k++]=temp1[i];
}
for( ;j<l2;j++){
    mergearray[k++]=temp2[j];
}


    cout << "mergelength element are: "<<endl;;
    for (int j = 0; j < mergelength; j++)
    {
        cout<<mergearray[j]<<" ";
    }

//Display(mergearray,mergelength);
}

void Array_Union(struct Array1 arr1,struct Array2 arr2){

int l1=arr1.length;
int l2=arr2.length;
int Unionlength=l1+l2;
int arrayunion[Unionlength];

int temp1[l1];
int temp2[l2];

auto i=0,j=0,k=0; //i>Indexpointer for temp1;j>Indexpointer for temp2;k>Indexpointer for Unionlength;

for(auto p=0;p<l1;p++){
    temp1[p]=arr1.A[p];
}
for(auto q=0;q<l2;q++){
    temp2[q]=arr2.A[q];
}

while(i<l1&&j<l2){

    if(temp1[i]<temp2[j]){
        arrayunion[k++]=temp1[i++];
    }
    else if(temp1[i]>temp2[j]){
        arrayunion[k++]=temp2[j++];
    }
    else{
        arrayunion[k++]=temp2[j++];
        i++;
    }
}
for( ;i<l1;i++){
    arrayunion[k++]=temp1[i];
}
for( ;j<l2;j++){
    arrayunion[k++]=temp2[j];
}

Unionlength=k;

    cout << "arrayunion element are: "<<endl;;
    for (int j = 0; j < Unionlength; j++)
    {
        cout<<arrayunion[j]<<" ";
    }

    //Display(arrayunion,Unionlength);
}

void Array_Intersection(struct Array1 arr1,struct Array2 arr2){

int l1=arr1.length;
int l2=arr2.length;
int Intersectlength=l1+l2;
int arrayIntersect[Intersectlength];

int temp1[l1];
int temp2[l2];

auto i=0,j=0,k=0; //i>Indexpointer for temp1;j>Indexpointer for temp2;k>Indexpointer for Unionlength;

for(auto p=0;p<l1;p++){
    temp1[p]=arr1.A[p];
}
for(auto q=0;q<l2;q++){
    temp2[q]=arr2.A[q];
}
while(i<l1&&j<l2){
    if((temp1[i]<temp2[j])){
i++;
    }
    else if((temp1[i]>temp2[j])){
j++;
    }
    else{
     arrayIntersect[k++]=temp1[i++];
     j++;
    }
}


Intersectlength=k;

    cout << "arrayIntersect element are: "<<endl;;
    for (int j = 0; j < Intersectlength; j++)
    {
        cout<<arrayIntersect[j]<<" ";
    }

    //Display(arrayunion,Unionlength);
}


void Array_Difference(struct Array1 arr1,struct Array2 arr2){

int l1=arr1.length;
int l2=arr2.length;
int Difflength=l1+l2;
int arrayDiff[Difflength];

int temp1[l1];
int temp2[l2];

auto i=0,j=0,k=0; //i>Indexpointer for temp1;j>Indexpointer for temp2;k>Indexpointer for Unionlength;

for(auto p=0;p<l1;p++){
    temp1[p]=arr1.A[p];
}
for(auto q=0;q<l2;q++){
    temp2[q]=arr2.A[q];
}
while(i<l1&&j<l2){
    if((temp1[i]<temp2[j])){
 arrayDiff[k++]=temp1[i++];
    }
    else if((temp1[i]>temp2[j])){
j++;
    }
    else{
     i++;
     j++;
    }
}

for( ;i<l1;i++){
    arrayDiff[k++]=temp1[i];
}
Difflength=k;

    cout << "arrayDiff element are: "<<endl;;
    for (int j = 0; j < Difflength; j++)
    {
        cout<<arrayDiff[j]<<" ";
    }

    //Display(arrayDiff,Unionlength);
}


int main()
{
    struct Array1 arr1;
    struct Array2 arr2;


    Create(&arr1,&arr2);
int l1=arr1.length;
int l2=arr2.length;
    cout << "Array1 element are: "<<endl;;
    for (int j = 0; j < l1; j++)
    {
        cout<<arr1.A[j]<<" ";
    }
    cout<<endl;
    cout << "Array2 element are: "<<endl;;
    for (int j = 0; j < l2; j++)
    {
        cout<<arr2.A[j]<<" ";
    }

    cout<<endl;

    Merge_Array(arr1,arr2);
    Array_Union(arr1,arr2);
    Array_Intersection(arr1,arr2);
    Array_Difference(arr1,arr2);


    return 0;
}
