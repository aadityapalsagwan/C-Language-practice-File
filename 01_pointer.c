#include<stdio.h>
int main(){
	int i=4;
	int *j;
	j=&i;
	printf("the value of i is %d\n",i);
	printf("The value of i is %d\n",*j);
	printf("the address of i is %u\n",&i);
	printf("The address of i is %u\n",j);
/*	printf("Address i=%u\n",&i);
    printf("Address i=%u\n",j);
    printf("Address j=%u\n",&j);
    printf("Value i=%d\n",i);
    printf("value i=%d\n",*(&i));
    printf("value  i=%d\n",*j);  */
	return 0;	
}
