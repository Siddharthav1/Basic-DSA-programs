#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int array0[3];
    char array1[3];
    printf("Size of INT array  : %Lu\n", sizeof(array0));
    printf("Size of CHAR array : %Lu\n\n", sizeof(array1));

    int A[5] = {2,4,6,8,10};
    printf("Size of A array  : %Lu\n",sizeof(A));

    //Find size of array
    int ArrayLength = sizeof(A)/sizeof(A[0]);
    printf("\nLength of array A : %d\n\n",ArrayLength);

    for(int i=0;i<ArrayLength;i++){
    printf("Elements of array A using Position : %d\n",A[i]);
    }
    for(int j=0;j<ArrayLength;j++){
    printf("Elements of array A using pointer  : %d\n",*(A+j));
    }

/*************
* ->  The Array "A" is the static array. It is created in stack memory so it is static array.
* The size of static array cannot be changed.
* ->  The dynamic can be created in heap. The heap can only be accessed by pointers. So below is shown
* How the array is created in array. The size cannot be increased but can create a new array with higher size
* and copy elements from small to big array.
*************/

//C++ - Language code
    int *p;
    p= new int[5];
    p[0]=1;p[1]=3;p[2]=5;p[3]=7;p[4]=9;
    //Find size of array
    int ArrayLengthP = 5;
    printf("\nLength of heap array P  : %d\n\n",ArrayLengthP);

    for(int i=0;i<ArrayLengthP;i++){
    printf("Elements of heap array P using C++ Position : %d\n",p[i]);
    }
    delete []p;

//C - Language code
    int *q;
    q= (int*)malloc(5*sizeof(int));
    q[0]=1;q[1]=3;q[2]=5;q[3]=7;q[4]=9;
    //Find size of array
    int ArrayLengthq = 5;
    printf("\nLength of heap array P  : %d\n\n",ArrayLengthq);

    for(int i=0;i<ArrayLengthq;i++){
    printf("Elements of heap array P using C   Position : %d\n",q[i]);
    }
    free(q);


//Size changing topic :
    int *p1;
    p1 = new int[5];
     int ArrayLengthp1 = 5;
    p1[0]=10;p1[1]=30;p1[2]=50;p1[3]=70;p1[4]=90;
    int *r;
    r = new int[10];
    int ArrayLengthr = 10;
    printf("\nLength of heap array r  : %d\n\n",ArrayLengthr);
    for(int l=0;l<ArrayLengthp1;l++){
    r[l]=p1[l];
    }
    for(int m=0;m<ArrayLengthr;m++){
    printf("Elements of heap array r using C   Position : %d\n",r[m]);
    }
    //Befor assigning new array pointer to old we need clear the old so clearing it. As it is array we add[] prefix here
delete []p1;
p1=r;

r=NULL;
    return 0;
}
