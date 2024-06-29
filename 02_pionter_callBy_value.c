#include<stdio.h>
int sum(int x, int y);
int main(){
	int x=4, y=8;
	printf("The value of x & y is %d and %d\n ",x,y);
	printf("The value of 4+8 is %d\n ",sum(x,y));
	printf("The value of x & y after function call is %d and %d\n ",x,y);
	return 0;
}
int sum(int x,int y){
	int sum;
	sum=x+y;
//	y=5456;
//	x=43564;
	return x+y;
}
