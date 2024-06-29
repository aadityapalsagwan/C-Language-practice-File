#include<stdio.h>
#include<string.h>
 struct employee{
 	int code;
 	float salary;
 	char name[10];
 };
 int main(){
 	struct employee e1;
 	e1.code=101;
 	e1.salary=25000.40;
 	strcpy(e1.name,"Aditya Pal");
 	printf("%s\n",e1.name);
 	printf("%d\n",e1.code);
 	printf("%.2f\n",e1.salary);
 	
 	return 0;
 }
