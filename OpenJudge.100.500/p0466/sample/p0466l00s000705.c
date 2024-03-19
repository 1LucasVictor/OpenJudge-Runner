#include <stdio.h>
#include <string.h>
int main(void){
    char s[15];
    char t[15];
    int i,sl,tl,flag=1;
    
    scanf("%s",s);
    scanf("%s",t);
    
    sl=strlen(s);
    tl=strlen(t);
    
    if(tl==sl+1){
        for(i=0;i<sl;i++){
            if(s[i] !=t[i]){
                flag=0;
            }
        }
    }else{
        flag=0;
    }
    
    if(flag==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}