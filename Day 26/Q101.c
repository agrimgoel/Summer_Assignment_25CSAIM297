#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int num,guess,attempts=0;
srand(time(0));
num=rand()%100+1;
do{
printf("Enter guess: ");
scanf("%d",&guess);
attempts++;
if(guess>num)printf("Too high\n");
else if(guess<num)printf("Too low\n");
else printf("Correct in %d attempts\n",attempts);
}while(guess!=num);
return 0;
}
