#include<stdio.h>
int main(){
    int a,b,i,count;
    double tap;
    scanf("%d %d",&a,&b);
    count = a; //未使用の電源タップの数
    if(a >= b){
        printf("1\n");
        return 0;
    }
    
    tap = (b-1) / (a-1);
    tap += 0.5;
    tap *= 10;
    tap = (int)tap/10;
    printf("%g\n",tap);
    return 0;
}
