#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
    return *(long long*)a-*(long long*)b;
}

int main(){
    long long L,R;
    scanf("%lld %lld",&L,&R);
    long long h[R-L+1];
    for(long long i=0;i<=R-L;i++){
        h[i]=(L+i)%2019;
    }
    qsort(h,R-L+1,sizeof(long long),cmp);
    printf("%lld\n",h[0]*h[1]);
}
