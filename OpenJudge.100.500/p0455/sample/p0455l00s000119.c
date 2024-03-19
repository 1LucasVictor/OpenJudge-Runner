#include <stdio.h>

int calc(int a){
    int temp;
    temp=a+a*a+a*a*a;
    return temp;
}
int main(void){
    int a;
    scanf("%d",&a);
    int number=0;
    number=calc(a);
    printf("%d\n",number);
    return 0;
}