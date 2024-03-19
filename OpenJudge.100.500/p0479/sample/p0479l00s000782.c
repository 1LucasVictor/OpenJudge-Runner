#include<stdio.h>
int main(){
    int N,a[200000],b[200000];
    scanf("%d",&N);
    for(int i=0;i<N-1;i++){
        scanf("%d",&a[i]);

    }
    for(int i=0;i<N-1;i++){
        b[a[i]-1]++;
    }
    for(int i=0;i<N;i++){
        printf("%d\n",b[i]);
    }
}