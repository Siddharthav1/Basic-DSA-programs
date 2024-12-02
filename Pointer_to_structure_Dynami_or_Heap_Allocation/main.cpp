/********************
file name   : main.cpp
Author      : Siddhartha V
version     : 1.0
Description : Pointer_to_structure_Dynamic_or_Heap_Allocation
Copyright   :
********************/


#include<iostream>
#include<stdio.h>

//Below .h is needed for the heap memory allocation i.e "#include<stdlib.h>"
#include<stdlib.h>

using namespace std;


struct Rectangle{
int length;
int breadth;
};


int main()
{
    cout << "Hello world!\n\n" << endl;

    struct Rectangle r = {10,5};

    printf("Length of Rectangle  : %d\n",r.length);
    printf("breadth of Rectangle : %d\n",r.breadth);


    // declare a pointer of type struct rectangle
    struct Rectangle *p;

    // Below from line 30 to 37 is C language syntax for pointer to struct

    //heap mem allocatio in C syntax
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    //Access the struct member using pointer
    p->length=20;
    p->breadth=15;
    printf("Length of Rectangle  : %d\n",p->length);
    printf("breadth of Rectangle : %d\n",p->breadth);
    //Always delete the pointer memory after completion of its use.
    free(p);


    // Below from line 40 to 49 is C++ language syntax for pointer to struct
    // heap mem allocatio in C++ syntax
    p= new Rectangle; //NOTE : P is already declared in line 27 so no need to repeat the line

    //Access the struct member using pointer
    p->length=30;
    p->breadth=40;
    cout<<"Length after pointer access   : "<<p->length<<endl;
    cout<<"breadth after pointer access  : "<<p->breadth<<endl;
    //Always delete the pointer memory after completion of its use.
    delete p;


    return 0;
}
