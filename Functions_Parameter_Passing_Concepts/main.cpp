/********************
file name   : main.cpp
Author      : Siddhartha V
version     : 1.0
Description : Functions_Parameter_Concepts
Copyright   :
********************/


#include <iostream>
#include<stdio.h>
//Below .h is needed for the heap memory allocation i.e "#include<stdlib.h>"
#include<stdlib.h>

using namespace std;

int Add(int x, int y){
    int z;
    z=x+y;
    printf("Value of x in Add func : %d \nValue of y in Add func : %d\n", x,y);

    return z;
}

/********************
Below 3 funcs : CallByValue,
                CallByAddress,
                CallByReference
will also perform same addition operation, but will be
explaining different parametar passing logics here.

********************/

int CallByValue(int x, int y){

/***
*   Same as Add func. But the func shall not be void as it won't change the actual parameter
*   'a' and 'b' in main func.
***/

return 0;

}

void CallByAddress(int *x, int *y, int *z){
    *z=*x+*y;
    printf("\nValue of x in CallByAddress func : %d \nValue of y in CallByAddress func : %d\n", *x,*y);

/***
 *  Here the address of a,b, and sum of main fun is recieved. And also we are not returning anything
 *  but in printf of main we see the updated sum value.
 ***/

}

void SwapByAddress(int *x, int *y){
    printf("\nValue of a in SwapByAddress func : %d \nValue of b in SwapByAddress func : %d\n", *x,*y);

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
/***
 *  Here the address of a and b of main fun is recieved. And also we are not returning anything
 *  but in printf of main we see the updated sum value.
 ***/

}

/********************
*  "CallByReference"  is only supported in C++. It is not present in C.
*   So this will be used in C++ syntax only.
********************/

void CallByReference(int &x, int &y,int &z){
    z=x+y;
    printf("\nValue of x in CallByReference func : %d \nValue of y in CallByReference func : %d\n", x,y);

/***
 *  Here the reference of a,b, and sum of main fun is recieved. And also we are not returning anything
 *  but in printf of main we see the updated sum value. Once the reference is created we use the refrence
 *  parameters as normal variables.
 ***/
}


void SwapByReference(int &x, int &y){
    printf("\nValue of a in SwapByReference func : %d \nValue of b in SwapByReference func : %d\n", x,y);

    int temp;
    temp=x;
    x=y;
    y=temp;
/***
 *  Here the address of a and b of main fun is recieved. And also we are not returning anything
 *  but in printf of main we see the updated sum value.
 ***/

}

void CallByMixed(int *x, int &y, int *z){
printf("\nValue of a in CallByMixed func : %d \nValue of b in CallByMixed func : %d\n", *x,y);

*z=*x+y;
}

void SwapByMixed(int *x, int &y){
printf("\nValue of a in SwapByMixed func : %d \nValue of b in SwapByMixed func : %d\n", *x,y);

int temp;
temp=*x;
*x=y;
y=temp;
}

int main()
{
    cout << "Hello world!" << endl<<endl;
    int a=5;
    int b=4;
    int sum;

    sum=Add(a,b);
    printf("The sum of a and b from Add func is             :  %d\n", sum);

    a=3;b=9;
    CallByAddress(&a,&b,&sum);
    printf("The sum of a and b from CallByAddress func is   :  %d\n", sum);
    SwapByAddress(&a,&b);
    printf("\nValue of a after SwapByAddress : %d \nValue of b after SwapByAddress : %d\n", a,b);

    a=5;b=10;
    CallByReference(a,b,sum);
    printf("The sum of a and b from CallByReference func is :  %d\n", sum);
    SwapByReference(a,b);
    printf("\nValue of a SwapByReference swap : %d \nValue of b SwapByReference swap : %d\n", a,b);

    a=6;b=12;
    CallByMixed(&a,b,&sum);
    printf("The sum of a and b from CallByMixed func is :  %d\n", sum);
    SwapByMixed(&a,b);
    printf("\nValue of a SwapByMixed swap : %d \nValue of b SwapByMixed swap : %d\n", a,b);

    return 0;
}
