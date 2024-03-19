#include<stdio.h>
#include<string.h>
int main(){
    int n=0;
    while(1){
        char x[1000];
        scanf("%s",x);
        if(x[0] == '0') break;
        for(int i=0;i<strlen(x);i++){
            n += x[i] - '0';
        }
        printf("%d\n",n);
        n = 0;
    }
}
