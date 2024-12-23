/********************
file name   : main.cpp
Author      : Siddhartha V
version     : 1.0
Description : ArraY_ADT : get(),set,Max,Min,Sum is covered
Copyright   :
********************/

#include <iostream>
#include<stdio.h>

using namespace std;

struct Array {
    int A[10];
    int length;
    int size;
};


int Create(struct Array *arr){

    int length1;
    cout << "Enter number of elements: " << endl;
    cin >> length1;
    arr->length=length1;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < length1; i++){
        cout << "Array element: " << i << " = ";
        cin >> arr->A[i];
        cout<<endl;
    }
    cout << "Array element are: "<<endl;;
    for (int j = 0; j < length1; j++){
        cout<<arr->A[j]<<" ";
    }
 cout<<endl;cout<<endl;cout<<endl;

return 0;
}

int GetElement(struct Array arr,int getindex){

    int IndextoGet=getindex;

    if((IndextoGet>=0)&&(IndextoGet<arr.length)){
     return arr.A[IndextoGet];
    }
    else
return -1;
}

int SetElement(struct Array *arr){

    int IndextoGet;
    int ElementToSet;

    printf("Enter the Index from which we need too set element : ");
    cin>>IndextoGet;
    cout<<endl;
    if((IndextoGet>=0)&&(IndextoGet<arr->length)){
        printf("Enter the Index from which we need too set element : ");
        cin>>ElementToSet;
        cout<<endl;
        arr->A[IndextoGet]=ElementToSet;
     return arr->A[IndextoGet];
    }
    else
return -1;
}

int MinElemet(struct Array arr){
    int minval;

    minval=arr.A[0];

    for(auto i=0;i<arr.length;i++){
        if(minval<arr.A[i]){
            minval=arr.A[i];
        }
    }
    return minval;
    }

int MaxElemet(struct Array arr){
    int maxval;

    maxval=arr.A[0];

    for(auto i=0;i<arr.length;i++){
        if(maxval>arr.A[i]){
            maxval=arr.A[i];
        }
    }
return maxval;
}

int SumOfArray(struct Array arr){

    int sum=0;
    for(auto i=0; i<arr.length;i++){
        sum=sum+arr.A[i];
    }

return sum;
}


int Average(struct Array arr){

    int Average=0;
    int sum=0;
    for(auto i=0; i<arr.length;i++){
        sum=sum+arr.A[i];
    }

    int LengthofArray=(sizeof(arr.A)/sizeof(arr.A[0]));

    Average=sum/LengthofArray;

return Average;
}

int main(){

struct Array arr;

Create(&arr);

    cout << "Array element are main(): "<<endl;;
    for (int j = 0; j < arr.length; j++){
        cout<<arr.A[j]<<" ";
    }
    cout<<endl<<endl;
    cout<<"The element at given Index is        : "<<GetElement(arr,2)<<endl;
    cout<<"The Max element in array is          : "<<MinElemet(arr)<<endl;
    cout<<"The Min element in array is          : "<<MaxElemet(arr)<<endl;
    cout<<"The Sun of element in array is       : "<<SumOfArray(arr)<<endl;
    cout<<"The Average of element in array is   : "<<Average(arr)<<endl;

    SetElement(&arr);
    cout << "Array element are main()after SetElement : "<<endl;;
    for (int j = 0; j < arr.length; j++){
    cout<<arr.A[j]<<" ";
    }

    return 0;
}
