#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if((N%2==0&&N/2<=9)||(N%3==0&&N/3<=9)||(N%4==0&&N/4<=9)||(N%5==0&&N/5<=9)||(N%6==0&&N/6<=9)||(N%7==0&&N/7<=9)||(N%8==0&&N/8<=9)||(N%9==0&&N/9<=9)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
