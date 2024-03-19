#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int b = num * num;
    int c = num * num * num;
    printf("%d\n",num + b + c);
}