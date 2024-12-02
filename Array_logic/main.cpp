#include <iostream>

using namespace std;

int main()
{
    int array0[3];
    char array1[3];

    printf("\nSize of INT array  : %Lu\n", sizeof(array0));
    printf("\nSize of CHAR array : %Lu\n", sizeof(array1));


//Initialize an array
    int s[6]={2,4,3,6,5,1};
    cout<<"Initialized Array is : "<<endl;
    for(auto x:s){
    cout<<x<<" "<<endl;
    }

//Logic to pick only greater number in array
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

//Logic to arrange data in increasing order
    cout<<" "<<endl;
    cout<<"New array After Logic to arrange data in increasing order :"<<endl;

    for(auto x:s){
        if(s[x]>s[x+1]){
           int temp = s[x+1];
           s[x+1]=s[x];
           s[x]=temp;
    }
    cout<<s[x]<<" "<<endl;
}


return 0;
}
