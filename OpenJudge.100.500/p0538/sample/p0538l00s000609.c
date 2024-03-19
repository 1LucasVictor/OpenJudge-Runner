#include<stdio.h>

int main()
{
//変数定義
int A;
int B;

//入力
scanf("%d", &A);
scanf("%d", &B);

//A,Bの判定
if(A>=10){
printf("-1\n");
}else if(B>=10){
printf("-1\n");
}else{
printf("%d\n",A*B);
}
}
