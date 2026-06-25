#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int n=strlen(s),count=1;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1])count++;
        else{
            printf("%c%d",s[i],count);
            count=1;
        }
    }
    return 0;
}
