#include <stdio.h>

int main(void){
    int H,N,i=0,sum=0;
    scanf("%d %d\n",&H,&N);
    int a[N];
    for (i=0;i<N;i++){
        scanf("%d\n",&a[i]);
        sum += a[i];
    }
    if (sum>=H){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}

