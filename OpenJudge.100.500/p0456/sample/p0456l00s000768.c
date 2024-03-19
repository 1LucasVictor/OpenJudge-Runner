#include <stdio.h>
#include <string.h>
int main(void){
    char s[1000000], t[100000];
    int c=0, i;
    
    scanf("%s",s);
    scanf("%s",t);
    
    if(strcmp(s,t)==0) printf("0\n");
    else{
        for(i=0;i<strlen(t);i++){
            if(s[i]!=t[i]){
                s[i]=t[i];
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}