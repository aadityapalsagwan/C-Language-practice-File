#include<stdio.h>
 int main(){
 	int i=23;
 	int *ptr=&i;
 	printf("The value of ptr is: %u\n",ptr);
 	ptr++;
 	printf("the value of ptr is: %u\n",ptr);
 	return 0;
 }
