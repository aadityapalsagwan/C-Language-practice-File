#include<stdio.h>
 int main(){
 	int maths,clanguage, java;
 	float total;
 	printf("Enter the maths marks is:\n");
 	scanf("%d",&maths);
 	printf("Enter the c language marks is:\n ");
 	scanf("%d",&clanguage);
 	printf("Enter the java marks is:\n");
 	scanf("%d",&java);
 	total = (maths + clanguage + java)/3;
 	if((total<40)||maths<33 || clanguage<33 || java<33){
 		printf("your are fail %f\n",total);
	 }
	 else{
	 	printf("your are pass %f\n",total);
	 }
	 return 0;
 }
