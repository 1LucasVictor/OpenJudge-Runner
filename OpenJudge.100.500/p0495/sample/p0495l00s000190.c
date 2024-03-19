#include<stdio.h>
int main(){
    char s[3];
    int i,flag = 0;
    
    for(i = 0 ; i < 3 ; i++) scanf("%c",&s[i]);
    
    for(i = 0 ; i < 2 ; i++){
        if(s[i] != s[i+1]) flag = 1;
    }
    
    if(flag == 1) printf("Yes\n");
    else printf("No\n");
    
    return 0;
}
