#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int p,h,m;
    m=a%60;
    h=(a-m)/60;
    p=h/60;
    h=h%60;
    
    printf("%d:%d:%d\n",p,h,m);
    return 0;
}
