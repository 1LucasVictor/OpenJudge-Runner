#include<stdio.h>
#include<ctype.h>
 
int main(void){
 
    char str[1200];
    int i;
    for(i=0;i<1200;i++)str[i]='\n';
    scanf("%[^\n]",str);
    i=0;
    while(1){
        if(str[i]=='\n'){break;}
        if(islower(str[i])){str[i]=toupper(str[i]);}
        else if(isupper(str[i])){str[i]=tolower(str[i]);}
        i++;
 
    }printf("%s\n",str);
 
 
    return 0;
}