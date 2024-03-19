#include<stdio.h>
#include<ctype.h>
int main(){
    char a;                             
    while(1){
        scanf("%c",&a);
        if(islower(a)){
            a=toupper(a);              
        }else if(isupper(a)){
            a=tolower(a);
       }
        printf("%c",a);
        if(a == '\n'){                    
            break;
        }
    }
    return 0;
}