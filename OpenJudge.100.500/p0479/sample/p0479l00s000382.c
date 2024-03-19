#include<stdio.h>
#define PI 3.141592
#include <stdlib.h>

int main(){ 
        int N;
        scanf("%d",&N);

        int a[N-1];

        int i;
        for(i=0;i<N-1;i++){
                scanf("%d",&a[i]);
        }

        int ans[N];
        for(i=0;i<N;i++){
                ans[i] = 0;
        }

        for(i=0;i<N-1;i++){
                ans[ a[i]-1 ] = ans[ a[i]-1 ] +1;
        }

        for(i=0;i<N;i++){
                printf("%d\n",ans[i]);
        }
}  