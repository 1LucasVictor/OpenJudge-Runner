#include<stdio.h>

int main(){
    int num = 0;

    scanf("%d", &num);

    int top = num /100;
    int mid = (num - top * 100) / 10;
    int low = (num - top * 100 - mid * 10);

    if(top == 7 || mid == 7 || low == 7){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}