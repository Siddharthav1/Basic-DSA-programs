/********************
file name   : Increment_decriment.c
Author      : Siddhartha V
version     : 1.0
Description : Increment_decriment
Copyright   :
********************/

#include<stdio.h>
int main(void)
{
	int x=3;
	printf("x=%d\t",x);
	printf("x=%d\t",++x);	/*Prefix increment*/
	printf("x=%d\t",x);
	printf("x=%d\t",--x);	/*Prefix decrement*/
	printf("x=%d\n",x);
	return 0;
}