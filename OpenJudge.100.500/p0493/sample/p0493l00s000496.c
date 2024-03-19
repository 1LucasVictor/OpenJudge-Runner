#include <stdio.h>
int main(void){
    // Your code here!
    int num, res, cnt = 0;
    scanf("%d",&num);
    cnt = num/500;
    num = num - cnt*500;
    res = ((num/5))*5;
    printf("%d",1000*cnt+res);
    return 0;
}
