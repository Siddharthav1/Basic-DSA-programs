/********************
file name   : main.cpp
Author      : Siddhartha V
version     : 1.0
Description : ArraY_ADT : Display(),Add/Append(int x),Insert(int Index,int x),delete(int x) is covered
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

int ArrayModify[10];

void Display(struct Array arr){
    int Array_length=arr.length;
    cout<<"Array Elements Are : "<<endl;
    for(int i=0;i<Array_length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int Create(){

    int *p;
    p=(int*)malloc(sizeof(int));
    int length;
    cout << "Enter number of elements: " << endl;
    cin >> length;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < length; i++){
        cout << "Array element: " << i << " = ";
        cin >> p[i];
        cout<<endl;
    }
    cout << "Array element are: "<<endl;;
    for (int j = 0; j < length; j++){
        cout<<p[j]<<" ";
    }
 cout<<endl;cout<<endl;cout<<endl;
    free(p);

return 0;
}

int Append(struct Array arr,int x){

    int ArrayLength=arr.length;
    int Arraysize=arr.size;
    int MyArray[ArrayLength];
    cout<<"Array Elements Before Appending Are : "<<endl;
    for(int i=0;i<ArrayLength;i++){
     MyArray[i]=arr.A[i];
    }
    for(int i=0;i<ArrayLength;i++){
        cout<<MyArray[i]<<" ";
    }
    cout<<endl;

    if(ArrayLength<Arraysize){
        //ArrayLength=(ArrayLength+1);
        MyArray[ArrayLength++]=x;
    }

    cout<<"Array Elements After Appending Are : "<<endl;
    for(int i=0;i<ArrayLength;i++){
        cout<<MyArray[i]<<" ";
    }
    cout<<endl;

    return 0;
}

int Insert(struct Array arr){

    int ArrayLength=arr.length;
    //int Arraysize=arr.size;
    int MyArray[ArrayLength];
    cout<<"Array Elements Before Insert Operation Are : "<<endl;
    for(int i=0;i<ArrayLength;i++){
     MyArray[i]=arr.A[i];
    }
    for(int i=0;i<ArrayLength;i++){
        cout<<MyArray[i]<<" ";
    }
    cout<<endl;

    int IndexModify;
    int DataModify;
    printf("Enter the index that needs to be inserted/Modified : ");
    scanf("%d",&IndexModify);
    printf("Enter the Data that needs to be inserted/Modified  : ");
    scanf("%d",&DataModify);

    if((IndexModify>0)&&(IndexModify<ArrayLength)){
        ArrayLength++;
        for(int i=ArrayLength;i>=IndexModify;i--){
            MyArray[i]=MyArray[i-1];
        }
        MyArray[IndexModify]=DataModify;

        cout<<"Array Elements After Insert Operation Are : "<<endl;
        for(int i=0;i<ArrayLength;i++){
            cout<<MyArray[i]<<" ";
        }
        cout<<endl;
    }
    else{
        printf("Entered Index %d is out of bound",IndexModify);
    }

return 0;
}

int Delete(struct Array arr){

    int ArrayLength=arr.length;
    //int Arraysize=arr.size;
    int MyArray[ArrayLength];
    cout<<"Array Elements Before Delete Operation Are : "<<endl;
    for(int i=0;i<ArrayLength;i++){
     MyArray[i]=arr.A[i];
    }
    for(int i=0;i<ArrayLength;i++){
        cout<<MyArray[i]<<" ";
    }
    cout<<endl;

    int IndexModify;
    printf("Enter the index that needs to be Delete/Modified : ");
    scanf("%d",&IndexModify);

    if((IndexModify>0)&&(IndexModify<ArrayLength)){
        ArrayLength--;
        for(int i=IndexModify;i<=ArrayLength;i++){
            MyArray[i]=MyArray[i+1];
        }

        cout<<"Array Elements After Delete Operation Are : "<<endl;
        for(int i=0;i<ArrayLength;i++){
            cout<<MyArray[i]<<" ";
        }
        cout<<endl;
    }
    else{
        printf("Entered Index %d is out of bound",IndexModify);
    }

return 0;
}

int main(){

struct Array arr={{1,3,5,7,9},5,10};

Display(arr);
Create();
Append(arr,15);
Insert(arr);
Delete(arr);

return 0;
}







