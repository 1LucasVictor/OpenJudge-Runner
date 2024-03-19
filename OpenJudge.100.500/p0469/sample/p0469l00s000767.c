#include <stdio.h>

int main(void){
    int k,a,b,c,ans=0,i;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);

    c = a/k;

    for(i=c;i*k<=b;i++){
        if((a <= k*i) && (k*i <= b)){
            ans = 1; 
            break;
        } 
    }

    if(ans == 1){
        printf("OK\n");
    }else{
        printf("NG\n");
    }

    return 0;
}