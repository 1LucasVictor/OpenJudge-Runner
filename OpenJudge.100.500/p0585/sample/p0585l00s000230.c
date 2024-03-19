#include <stdio.h>

int main(){
int A,B,T;
scanf("%d%d%d",&A,&B,&T);	/* 入力部分 */
int g_t = T/A;
int ans = g_t*B;
printf("%d\n",ans);
return 0;
}
