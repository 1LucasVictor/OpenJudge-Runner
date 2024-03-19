#include<stdio.h>

int calc(int x){
    int ret=0;
    while(x%100==0){
        x/=100;
        ret++;
    }
    return ret;
}

int main(void){
    int d,n,count=0,num=0;
    scanf("%d%d",&d,&n);
    while(count<n){
        ++num;
        if(calc(num)==d) ++count;
    }
    printf("%d\n",num);
    return 0;
}
