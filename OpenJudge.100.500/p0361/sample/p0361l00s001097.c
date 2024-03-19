#include<stdio.h>
int main(){
    int S; int m;
    scanf("%d",&S);
    m=S%3600;
    printf("%d:",S/3600); printf("%d:",m/60); printf("%d\n",m%60);
    return 0;
}
