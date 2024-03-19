#include<stdio.h>
int main(void){
    char S[100000];
    int r,b;
    scanf("%s",S);
    for(int i=0;S[i]!='\0';i++){
        if (S[i]=='1') {
            b++;
        }
        else{
            r++;
        }
    }
    if(r<b){
        printf("%d\n",r*2);
    }
    else{
        printf("%d\n",b*2);
    }
    return 0;
}