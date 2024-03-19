#include<stdio.h>

int main(void){
    int a,b,c,left;
    scanf("%d %d %d",&a,&b,&c);
    left=c;
    for(int i = 0; i < c; i++){
        if(b==a || left==0){
            break;
        }else{
            b++;
            left--;
        }
    }
    printf("%d",left);
    return 0;
}