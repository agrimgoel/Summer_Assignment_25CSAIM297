#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100],res[100];
    int i,j,k=0,found;
    scanf("%s%s",s1,s2);
    for(i=0;s1[i];i++){
        found=0;
        for(j=0;j<k;j++)if(res[j]==s1[i]){found=1;break;}
        if(!found&&strchr(s2,s1[i]))res[k++]=s1[i];
    }
    res[k]='\0';
    printf("%s",res);
    return 0;
}
