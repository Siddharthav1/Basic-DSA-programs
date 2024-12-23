/********************
file name   : main.cpp
Author      : Siddhartha V
version     : 1.0
Description : ArraY_ADT : Binary Search : The result is accurate when array is sorted/in increasing order
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

int Binarysearch_Iterative(struct Array arr, int keyValue)
{
    if(arr.length>0)
    {
        int l=0;
        int h=arr.length-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(keyValue==arr.A[mid])
                return mid;
            else if(arr.A[mid]<keyValue)
                l=mid+1;
            else
                h=mid-1;
        }
    }
    return -1;
}


int RBinarySearch_Recursive(struct Array arr, int keyValue, int low, int high)
{


    if(low<=high)
    {
        int midIndex=(low+high)/2;
        if(keyValue==arr.A[midIndex])
            return midIndex;
        else if(keyValue<arr.A[midIndex])
            return RBinarySearch_Recursive(arr,keyValue,low,midIndex-1);
        else
            return RBinarySearch_Recursive(arr,keyValue,midIndex+1,high);
        }
    return -1;
}

int main(){
    struct Array arr={{5,2,6,1,9},5,10};
    Display(arr);

    int lowIndex,highIndex;
    lowIndex=0;
    highIndex=arr.length;

    printf("The index of the searched element with RBinarySearch_Recursive is : %d \n",RBinarySearch_Recursive(arr,5,lowIndex,highIndex));
    printf("The index of the searched element with Binarysearch_Iterative is  : %d \n",Binarysearch_Iterative(arr,5));

return 0;
}







