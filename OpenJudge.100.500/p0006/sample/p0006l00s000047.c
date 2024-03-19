#include <stdio.h>

int roundUp(int x){
    if(x%1000!=0) return x=x-(x%1000)+1000;
    else return x;
}

int main(void){
    int n;
    int x=100000;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        x*=1.05;
        x=roundUp(x);
    }
    printf("%d\n",x);
    return 0;
}
