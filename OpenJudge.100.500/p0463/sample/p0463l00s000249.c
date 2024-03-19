#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s = n % 10;
    if(s == 3){
        puts("bon");
    }
    else if(s == 0 || s ==  1 || s == 6 || s == 8){
        puts("pon");
    }
    else puts("hon");
    return 0;
}