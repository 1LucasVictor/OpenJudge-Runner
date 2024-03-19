#include<stdio.h>
int a[298];
int main(void){
    int i,j,k,n,x;

    while(1){
        scanf("%d %d",&n,&x);
        if(n == 0 && x == 0)
            break;
        for(i = 1;i <= n;i++)
            for(j = i + 1;j <= n;j++)
                for(k = j + 1;k <= n;k++)
                    a[i + j + k]++;
        printf("%d\n",a[x]);
    }
    return 0;
}