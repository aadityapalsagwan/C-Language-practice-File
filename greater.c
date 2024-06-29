#include<stdio.h>
int main(){
	int num1,num2,num3,num4;
	printf("Enter the num1 is: \n");
	scanf("%d",&num1);
	printf("Enter the num2 is: \n");
	scanf("%d",&num2);
	printf("Enter the num3 is: \n");
	scanf("%d",&num3);
	printf("Enter the num4 is: \n");
	scanf("%d",&num4);
	if(num1>num2 && num2<num3 && num3<num4){
		printf("your no. is greater\n");
	}
	else{
		printf("your no. is not greater\n");
	}
	return 0;
}
