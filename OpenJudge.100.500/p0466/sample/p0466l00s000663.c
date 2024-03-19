#include<stdio.h>
#include<string.h>

int main(void){
    char S[10], T[11];
    int b = 0, i = 0;
    scanf("%s", S);
    
    for(i = 0; S[i]!='\0';++i);
    scanf("%s", T);
    
    for(int j = 0; j < i; j++){
        if(S[j] != T[j]) b+= 1;
    }
    
    if(b == 0) printf("Yes\n");
    else printf("No\n");
    
    return 0;

}