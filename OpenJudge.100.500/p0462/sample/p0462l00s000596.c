#include<stdio.h>
#include<math.h>
int main(void){
    int a;
    double b;
    scanf("%d %lf",&a,&b);
    int ans = floor(a*b);
    printf("%d",ans);
    return 0;
}