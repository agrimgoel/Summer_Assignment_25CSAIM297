#include<stdio.h>
int main(){
int a,b,ch;
while(1){
printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\nEnter choice:");
scanf("%d",&ch);
if(ch==5)break;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
switch(ch){
case 1:printf("Result=%d\n",a+b);break;
case 2:printf("Result=%d\n",a-b);break;
case 3:printf("Result=%d\n",a*b);break;
case 4:if(b!=0)printf("Result=%d\n",a/b);else printf("Error\n");break;
default:printf("Invalid\n");
}}}
