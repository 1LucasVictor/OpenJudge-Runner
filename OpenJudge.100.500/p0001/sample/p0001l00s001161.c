#include <stdio.h>
int keta(int n);
int main(void){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d\n",keta(a+b));
    }
    return 0;
}

int keta(int n){
    int s=0,k=1;
    while(n/k>0){
        s++;
        k*=10;
    }
    return s;
}