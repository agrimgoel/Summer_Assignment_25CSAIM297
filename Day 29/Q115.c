#include<stdio.h>
#include<string.h>
#define N 100
int main(){
char s1[N],s2[N];
int ch;
printf("Enter string:");
scanf("%s",s1);
while(1){
printf("1.Length\n2.Copy\n3.Concat\n4.Compare\n5.Reverse\n6.Exit\nEnter choice:");
scanf("%d",&ch);
if(ch==6)break;
switch(ch){
case 1:printf("Length=%d\n",(int)strlen(s1));break;
case 2:printf("Enter string to copy:");scanf("%s",s2);strcpy(s1,s2);printf("Result=%s\n",s1);break;
case 3:printf("Enter string to concat:");scanf("%s",s2);strcat(s1,s2);printf("Result=%s\n",s1);break;
case 4:printf("Enter string to compare:");scanf("%s",s2);
if(strcmp(s1,s2)==0)printf("Equal\n");else printf("Not equal\n");break;
case 5:strrev(s1);printf("Result=%s\n",s1);break;
default:printf("Invalid\n");
}}}
