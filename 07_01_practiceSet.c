#include<stdio.h>
//Question 1
void reverse(int *arr,int n){  //Question 5
	int temp;
	for(int i=0;i<(n/2);i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
}
 int main(){
 /*	int arr[10];
 	int*ptr=arr;
 	ptr=ptr+2;
 	printf("The value of ptr is %u\n",ptr+2);
 	if(ptr==&arr[2]){
 		printf("These point to the same location in memory\n");
	 }
	 else{
	 	printf("These do not point to the same location in memory\n");
	 } */
	// Question 3 
/*	 int a[10];
	 for(int i=0;i<10;i++){
	 	a[i]=5*(i+1);
	 }
	 for(int i=0;i<10;i++){
	 	printf("5 X %d = %d\n",i+1,a[i]);
	 }*/
	 // Question 5
	 int arr[]={1,2,3,4,5,6,7};
	 reverse(arr,7);
	 	for(int i=0;i<7;i++){
		 printf("the value of %d element is %d\n",i,arr[i]);
	}
	 
	 return 0;
 }
