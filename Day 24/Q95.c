#include<stdio.h>
#include<string.h>
int main(){
    char s[200],word[50],longest[50];
    int i=0,j=0,max=0;
    fgets(s,200,stdin);
    while(s[i]!='\0'){
        if(s[i]!=' '&&s[i]!='\n'){
            word[j++]=s[i];
        }else{
            word[j]='\0';
            if(strlen(word)>max){
                max=strlen(word);
                strcpy(longest,word);
            }
            j=0;
        }
        i++;
    }
    printf("%s",longest);
    return 0;
}
