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

    int A[5];
    int B[5] = {1,2,3,4,5};
    int C[5] = {1,2};
    int D[5] = {0};
    int E[] = {9};

    printf("Size of A array  : %Lu\n",sizeof(A));
    printf("Size of B array  : %Lu\n",sizeof(B));
    printf("Size of C array  : %Lu\n",sizeof(C));
    printf("Size of D array  : %Lu\n",sizeof(D));
    printf("Size of E array  : %Lu\n",sizeof(E));

    //Find size of array
    int ArrayLength = sizeof(B)/sizeof(B[0]);
    printf("\nLength of B array  : %d\n\n",ArrayLength);

    for(int i=0;i<ArrayLength;i++){
    printf("Elements of B array using Position : %d\n",B[i]);
    }

    for(int j=0;j<ArrayLength;j++){
    printf("\nElements of B array using pointer  : %d\n",*(B+j));
    }

	//Initialize an array
    int s[6]={2,4,3,6,5,1};
    cout<<"\n\n\n\n\nInitialized Array is : "<<endl;
    for(auto x:s){
    cout<<x<<" "<<endl;
    }

//Logic to pick only greater number in array foreach loop is used
    cout<<" "<<endl;
    cout<<"New array After Pick only greater number logic :"<<endl;
    int t[6];
    for(auto x=0;x<5;x++){
    if(s[x]>s[x+1]){
        t[x]=s[x];
    }
    cout<<t[x]<<" "<<endl;
    }
    cout<<"Initialized Array is : "<<endl;
    for(auto x:s){
    cout<<x<<" "<<endl;
    }


return 0;
}
