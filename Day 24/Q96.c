#include<stdio.h>
#include<string.h>
int main(){
    char s[200],res[200];
    int i,j,k=0,found;
    scanf("%s",s);
    for(i=0;s[i];i++){
        found=0;
        for(j=0;j<k;j++){
            if(res[j]==s[i]){found=1;break;}
        }
        if(!found)res[k++]=s[i];
    }
    res[k]='\0';
    printf("%s",res);
    return 0;
}
