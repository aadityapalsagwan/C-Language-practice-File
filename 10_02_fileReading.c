#include<stdio.h>
 int main(){
 	FILE *ptr;
 	int num;
 	ptr=fopen("adi.text","r");
 	fscanf(ptr,"%d",&num);
 	printf("The value of num is:%d\n",num);
 	
 	return 0;
 }
