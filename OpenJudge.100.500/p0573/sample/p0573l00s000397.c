#include<stdio.h>
int main(){
    char S[4];
    int flag=0;
    scanf("%s",S);
    for(int i=0;i<4;i++){
    for(int j=i;j<4;j++){
    if(S[i]==S[j+1]){
        flag++;
    }
    }
    }
    if(flag==2){
        puts("Yes");
    }
    
    return 0;
}
