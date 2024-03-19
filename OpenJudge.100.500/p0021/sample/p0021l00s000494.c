/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0022&lang=jp
*/

#include<stdio.h>
int main(void)
{
    int n,i,j,k;
    int a[5000];
    int msum=0;
    int sum=0;

    scanf("%d",&n);
    do{
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            for(j=n-1;j>=i;j--){
                for(k=j;k>=i;k--){
                    sum+=a[k];
                }
                if(sum>msum){
                    msum=sum;
                }
                sum=0;
            }

        }
        printf("%d\n",msum);
        sum=0;
        msum=0;
        scanf("%d",&n);
    }while(n!=0);

    return 0;
}

