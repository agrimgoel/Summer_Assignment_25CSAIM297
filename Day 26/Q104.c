#include<stdio.h>
int main(){
int score=0,ans;
printf("Q1: Capital of India?\n1.Delhi 2.Mumbai 3.Kolkata\nEnter: ");
scanf("%d",&ans);
if(ans==1)score++;
printf("Q2: 2+2=?\n1.3 2.4 3.5\nEnter: ");
scanf("%d",&ans);
if(ans==2)score++;
printf("Q3: Largest planet?\n1.Earth 2.Mars 3.Jupiter\nEnter: ");
scanf("%d",&ans);
if(ans==3)score++;
printf("Your score: %d/3\n",score);
return 0;
}
