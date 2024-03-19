/* ex3_4
   kento_titech*/
#include<stdio.h>
int main(void){
    int i;
    int N,n,r;
    scanf("%d",&N);
    for(i=1;i<10;++i){
        n=N/i;
        r=N%i;
        if(0<n && n<10 && r==0){
            printf("Yes\n");
            break;
        }
    }
    if(i==10){
        printf("No\n");
    }
    return 0;
}