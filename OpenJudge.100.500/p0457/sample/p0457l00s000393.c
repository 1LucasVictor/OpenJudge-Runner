#include<stdio.h>
void swap(int *a,int *b){
   int swap;
   swap=*a;
   *a=*b;
   *b=swap;
}
void swap2(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<(n-1-i);j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int main(void){
    int N,M,K,i,sum=0;
    scanf("%d %d %d",&N,&M,&K);
    int a[N],b[M],c[N+M];
    for(i=0;i<N;i++){     
    scanf("%d",&a[i]);
    }
    for(i=0;i<M;i++){     
    scanf("%d",&b[i]);
    }
    for(i=0;i<N;i++){
        c[i]=a[i];
    }
    for(i=N;i<N+M;i++){
        c[i]=b[sum];
        sum++;
    }
    swap2(c,N+M);
    sum=0;
    for(i=0;sum<=K;i++){
    sum=sum+c[i];
    }
    printf("%d",i-1);
    return 0;
}