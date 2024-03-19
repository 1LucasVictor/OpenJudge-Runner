
#include<stdio.h>
int main(void)
{
    int sum[1000] = {0},i = 0,j,k = 0,a[1000];
    while(1){
        scanf("%d",&a[i]);
        if(a[i] == 0)break;
        i++;
        k++;

    }
    for(i = 0;i < k;i++){
        while(1){
            sum[i] += a[i] % 10;
            a[i] /= 10;
            if(a[i] <= 0)break;
        }
        printf("%d\n",sum[i]);
    }



    return 0;
}