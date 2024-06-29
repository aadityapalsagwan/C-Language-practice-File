#include<stdio.h>
#include<string.h>
 struct employee{
 	int code;
 	float salary;
 	char name[];
 };
 int main(){
 	struct employee e1;
 	struct employee *ptr;
 	ptr=&e1;
// 	(*ptr).code=111;
 	ptr->code=122;  //shortcut key
 	printf("%d",e1.code);
 	
 	return 0;
 }
