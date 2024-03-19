#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = n / 100;
    int b = n % 100;
    int c = n % 10;
    b = b / 10;
    //printf("%d %d %d\n",a,b,c);
    int flag = 0;
    if(a == 7 || b == 7){
        flag = 1;
    }
    if(c == 7){
        flag = 1;
    }
    if(flag == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}