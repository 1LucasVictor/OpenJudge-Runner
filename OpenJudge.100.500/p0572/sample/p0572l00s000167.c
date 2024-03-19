#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
    return *(long long*)a-*(long long*)b;
}

int main(){
    int s=0,t=0;
    long long L,R;
    scanf("%lld %lld",&L,&R);
    if(R-L>2018){
        printf("0\n");
        exit(0);
    }
    long long h[R-L+1];
    for(long long i=0;i<=R-L;i++){
        h[i]=(L+i)%2019;
        if(h[i]==3){
            t=1;
        }
        if(h[i]==673){
            s=1;
        }
    }
    if(s*t==1){
        printf("0\n");
        exit(0);
    }
    qsort(h,R-L+1,sizeof(long long),cmp);
    printf("%lld\n",h[0]*h[1]);
}
