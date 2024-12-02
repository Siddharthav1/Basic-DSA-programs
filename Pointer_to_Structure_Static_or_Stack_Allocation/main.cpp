/********************
file name   : main.cpp
Author      : Siddhartha V
version     : 1.0
Description : Pointer_to_Structure_Static_or_Stack_Allocation
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

    // Below from line 27 to 35 is C and C++ language syntax for pointer to struct
    // declare a pointer of type struct
    struct Rectangle *p;
    p=&r;
    //Access the struct member using pointer
    p->length=20;
    p->breadth=15;
    cout<<"Length after pointer access   : "<<p->length<<endl;
    cout<<"breadth after pointer access  : "<<p->breadth<<endl;
    free(p);




    return 0;
}
