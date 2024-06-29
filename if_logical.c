#include<stdio.h>
 int main(){
 	int age;
 	printf("Enter Your age\n");
 	scanf("%d",&age);
 	if(age<=70 && age>18){
 		printf("You are above 18 and below 70, tu drive ker sakta hai");
	 }
	 else{
	 	printf("tu nhi chala sakta");
	 }
	 return 0;
 }
