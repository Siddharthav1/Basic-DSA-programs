/********************
file name   : main.cpp
Author      : Siddhartha V
version     : 1.0
Description : ArraY_ADT : Array Sorting is covered
Copyright   :
********************/

#include <iostream>
#include<stdio.h>

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


bool Is_Sorted(struct Array arr)
{

    int length1=arr.length;

    for(auto i=0; i<length1-1; i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            cout << "Unsorted array elements: " << endl;
            return false;
        }
        cout << "Sorted array elements: " << endl;
        return true;
    }
}

// Bubble sort implementation
void SortArray_BubbleSort(struct Array *arr)
{

    int temp;
    for(auto i=0; i<arr->length-1; i++)
    {
        for (int j = 0; j < arr->length - i - 1; j++)
        {
            if(arr->A[j]>arr->A[j+1])
            {
                temp=arr->A[j];
                arr->A[j]=arr->A[j+1];
                arr->A[j+1]=temp;
            }
        }
    }
    cout << "Sorted Array element are: "<<endl;
    for (int j = 0; j < arr->length; j++)
    {
        cout<<arr->A[j]<<" ";
    }
    cout<<endl<<endl;
}

// Selection sort implementation
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    cout << "Sorted Array element are: "<<endl;;
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
}


int main()
{
    cout << "Hello world!" << endl;
    struct Array arr;
    Create(&arr);

    bool IsSorted;

    IsSorted=Is_Sorted(arr);
    if(IsSorted!=true)
    {
        SortArray_BubbleSort(&arr);
    }

//Selection Sort pgm
    int Array1[]= {2,3,1,6,4,5};
    int n = sizeof(Array1)/sizeof(Array1[0]);
    selectionSort(Array1,n);


    return 0;
}
