#include <stdio.h>
#include <string.h>
int main(){
    char s[2*10*10*10*10*10+1];
    char t[2*10*10*10*10*10+1];
    scanf("%s",s);
    scanf("%s",t);
    
    int t_len=strlen(t);
    int count=0;

    for(int i=0; i<t_len; i++){
        if(s[i]!=t[i]){
            s[i]=t[i];
            count++;
        }
    }

printf("%d",count);
return 0;
}