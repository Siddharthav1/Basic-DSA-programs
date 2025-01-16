#include <iostream>
#include<stdio.h>
using namespace std;



struct student {
// string name;
 char name[10];
 int age;
 int classs;
};

struct STRING {
 string name;
}s2;

struct CHAR {
 char name;
}s3;

struct INT {
 int classs;
}s4;

struct FLOAT {
 float f;
}s5;

struct COMBINED {
 string name;
 int age;
 float fs;

  char C;
}s6;


int main()
{
     printf("Size of structure STRING : %Lu \n",sizeof(s2));
     printf("Size of structure CHAR : %Lu \n",sizeof(s3));
     printf("Size of structure INT : %Lu \n",sizeof(s4));
     printf("Size of structure FLOAT : %Lu \n",sizeof(s5));
     printf("Size of structure COMBINED : %Lu \n",sizeof(s6));


    struct student s1={"SIDD",3,3};
    printf("\n\n\nSize of structure student : %Lu \n",sizeof(s1));
    printf("Data present in structure is : \n%s\n%d\n%d \n",s1.name,s1.age,s1.classs);

    s1.name[0]='P';s1.name[1]='U';s1.name[2]='N';s1.name[3]='U';
    s1.age=9;
    s1.classs=5;

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.classs<<endl;


   return 0;
}
