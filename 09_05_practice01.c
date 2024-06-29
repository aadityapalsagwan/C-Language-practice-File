#include<stdio.h>
// Question 1
 struct vector{
 	int x;
 	int y;
 };
int main (){
	struct vector v1,v2;
	v1.x=32;
	v2.y=56;
	printf("X dim is %d and Y dim is %d.",v1.x,v2.y);
	
	return 0;
} 
