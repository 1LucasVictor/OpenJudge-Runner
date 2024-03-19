#include <stdio.h>

int main(void)
{
    int n=0,m=0,max=0,book=0;
    long k=0,time=0,A[200010]={},B[200010]={};
    scanf("%d %d %ld",&n,&m,&k);
    for(int i=1;i<=n;i++){
        scanf("%ld",&A[i]);
        A[i]+=A[i-1];
    }
    for(int i=1;i<=m;i++){
        scanf("%ld",&B[i]);
        B[i]+=B[i-1];
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            time=A[i]+B[j];
            if(k<time){
                break;
            }else {
                book=i+j;
                if(max<book){
                    max=book;
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}
