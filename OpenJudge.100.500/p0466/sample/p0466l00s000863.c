#include<stdio.h>
#include <string.h>
int main(){
char S[10]={};
char T[11]={};
int n=0;
scanf("%s",S);
scanf("%s",T);
n = strlen(S);
if(n==0){
    printf("No\n");
}else{
    if(strncmp(S,T,n)==0){
        if(T[n]==0){
            printf("No\n");
        }else{
                if(T[n+1]==0){
                    printf("Yes\n");
                }else{
                    printf("No\n");
                }
                
            
        } 
    }else{
    printf("No\n");
    }
}

return 0;

}