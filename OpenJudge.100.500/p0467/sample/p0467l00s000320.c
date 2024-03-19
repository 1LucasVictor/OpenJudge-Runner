#include <stdio.h>

int main(void){
    int a,b,c;
    int k;
    int count=0;

    scanf("%d %d %d %d",&a,&b,&c,&k);

    for(int i = 0; i < k; i++){
        if(i < a){
            count++;
        }else if(i < a+b){
        }else if(i < a+b+c){
            count--;
        }
    }
    printf("%d\n",count);
    return(0);
}