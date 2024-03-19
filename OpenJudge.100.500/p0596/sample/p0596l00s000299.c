#include <stdio.h>
#include <string.h>

#define S_MAX 100000

int main(){

    char s[S_MAX];
    int len;
    int cnt_0 = 0; 
    int cnt_1 = 0;
    int i;

    scanf("%s", s);
    len = strlen(s);

    for(i=0 ; i<len ; i++){
        if(s[i]=='0'){
            cnt_0++;
        }
        else{
            cnt_1++;
        }
    }
    
    if(cnt_0 < cnt_1){
        printf("%d", cnt_0*2);
    }
    else{
        printf("%d", cnt_1*2);        
    }

}