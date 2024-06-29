#include<stdio.h>
 typedef struct complex{
 	int real;
 	int complex;
 }comp;
 void display(comp c){
 	printf("the value of real part is %d\n",c.real);
 	printf("The value of imaginary part is %d\n",c.complex);
 }
int main(){
	comp cnums[3];
	for(int i=0;i<3;i++){
		printf("Enter the real value for %d num\n",i+1);
		scanf("%d",&cnums[i].real);
		printf("enter the complex value for %d num\n",i+1);
		scanf("%d",&cnums[i].complex);	
	}
	for(int i=0;i<3;i++){
	   display(cnums[i]);
	}
	
	return 0;
} 
