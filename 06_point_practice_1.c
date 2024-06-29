#include<stdio.h>
//Question 2
void printAdd(int a){
	printf("The address of variable a is %u\n",&a);
}
 int main(){
// 	Question 1
 /*	int a=5;
 	int *ptr;
 	ptr = &a;
// 	printf("The address of variable a is: %u",&a);
 	printf("The address of variable a is %u\n",ptr);
 	printf("The value of variable a is %d\n",*ptr);  */
// 	Question 2
 	int i=5;
 	printf("The value of variable i is %d\n",i);
 	printAdd(i);
 	printf("The address of variable i is %u\n",&i);
 	return 0;
 }
