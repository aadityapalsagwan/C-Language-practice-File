#include<stdio.h>
int SnakeWaterGun( char you, char comp){

 // return 1 if u win,-1 if u lose and 0 if draw the match
 // condition draw..........
  if(you == comp){
     return 0;
  }	
  //non-draw condition
  if(you=='s'&& comp=='g'){
  	return -1;
  }
  else if(you=='g'&& comp=='s'){
  	return 1;
  }
  if(you=='s'&& comp=='w'){
  	return 1;
  }
  else if(you=='w'&& comp=='s'){
  	return -1;
  }
  if(you=='g'&& comp=='w'){
  	return -1;
  }
  else if(you=='w'&& comp=='g'){
  	return 1;
  }
}
  int main(){
  	char you,comp;
  	comp='s';
  	printf("Enter 's' for snake, 'w' for water and 'g'for gun:\n");
  	scanf("%c",&you);
  	int result = SnakeWaterGun(you,comp);
  	printf("You chose %c and computer chose %c.\n",you,comp);
  	if(result==0){
  		printf("Game Draw\n");
	  }
	  else if(result==1){
	  	printf("You Win \n");
	  }
	  else{
	  	printf("You Lose\n");
	  }
	  
	  return 0;
  }
