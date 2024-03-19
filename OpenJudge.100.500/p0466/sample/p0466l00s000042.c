#include<stdio.h>
#include<string.h>

int main(){
    char s[11];
    char t[11];
    int flag = 0;
    
    scanf("%s",s);
    scanf("%s",t);
    
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != t[i]){
            flag = 1;
            break;
        }
    }
    
    if(flag == 0) printf("Yes\n");
    else printf("No\n");
    return 0;
}
