#include <stdio.h>

int main(){
    char S[10];
    char T[11];
    scanf("%s", S);
    scanf("%s", T);

    int flag = 1;
    int i = 0;
    while(S[i]){
        if(S[i]!=T[i]){
            flag = 0;
        }
        i++;
    }
    if(T[i]==0){
        flag = 0;
    }
    if(T[i+1]!=0 && i!=9){
        flag = 0;
    }
    if(flag==0){
        puts("No");
    }else{
        puts("Yes");
    }
    return 0;
}