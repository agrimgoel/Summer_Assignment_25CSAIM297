#include<stdio.h>
#include<string.h>
int main(){
    char s[200],words[50][50],temp[50];
    int i=0,j=0,k=0;
    fgets(s,200,stdin);
    while(s[i]!='\0'){
        if(s[i]!=' '&&s[i]!='\n')words[k][j++]=s[i];
        else{
            words[k][j]='\0';
            k++;j=0;
        }
        i++;
    }
    for(i=0;i<k-1;i++){
        for(j=i+1;j<k;j++){
            if(strlen(words[i])>strlen(words[j])){
                strcpy(temp,words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],temp);
            }
        }
    }
    for(i=0;i<k;i++)printf("%s\n",words[i]);
    return 0;
}
