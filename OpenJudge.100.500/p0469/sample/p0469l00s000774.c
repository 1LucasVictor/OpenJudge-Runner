#include<stdio.h>
int main(){
    int k;
    scanf("%d",&k);

    int a,b;
    scanf("%d %d",&a,&b);

    for(int i=a;i<=b;i++){
        if((i % k) == 0){
            printf("OK\n");
            break;
        }
        if(i == b)printf("NG\n");
    }

    return 0;
}