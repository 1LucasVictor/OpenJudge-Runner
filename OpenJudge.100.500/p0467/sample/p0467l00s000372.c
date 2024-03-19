#include<stdio.h>

int main(){
    int a,b,c,k,n=0;
    scanf("%d%d%d%d", &a,&b,&c,&k);
    for(int i = 0; i < k; i++){
        if(a>0){
            n++;
            a--;
        }else if(b>0){
            b--;
        }else{
            n--;
            c--;
        }
    }
    printf("%d", n);
    return 0;
}
