#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if((0<a)&&(0<b)&&(a<10)&&(b<10)){
        printf("%d\n",a*b);
    }
    else{
        printf("-1\n");
    }
    return 0;
}
