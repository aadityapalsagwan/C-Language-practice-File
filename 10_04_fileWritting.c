#include<stdio.h>
 int main(){
 	FILE *ptr;
 	int num=26;
    ptr=fopen("gentate.text","w");
    fprintf(ptr,"The no. is:%d",num);
    fclose(ptr);
    
    return 0;
 }
