#include<stdio.h>
 struct employee {
 	int code;
 	float salary;
 	char name[20];
 };
 int main(){
 	struct employee Adi={101,63.20,"Aditya Pal"};
 	printf("Code is:- %d \n",Adi.code);
 	printf("Salary is:- %.2f \n",Adi.salary);
 	printf("Name is:- %s \n",Adi.name);
 	
 	return 0;
 }
