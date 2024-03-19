#include<stdio.h>

int main(void)
{
    int n,i,j,sum,max;
    int a[5000];

    while(scanf("%d",&n),n){

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        max=a[0];

        for(i=0;i<n;i++){
            sum=0;
            for(j=i;j<n;j++){
                sum+=a[j];
                if(max<sum){
                    max=sum;
                }
            }
        }

        printf("%d\n",max);

    }
    return 0;
}