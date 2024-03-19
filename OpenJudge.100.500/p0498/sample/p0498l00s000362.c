#include<stdio.h>
int A;
int N;

int main(){
	scanf("%d",&N);
    A=(N+1)/2;
	printf("%d",A);
    //scanfのほうには＆を忘れずに！！！printfのほうには＆つけるな！！！
    return 0;
}