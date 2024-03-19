#include <stdio.h>
main()
{
	int x; /* 入力用 */
	int a; /* 合計 */
	int n; /* 入力個数 */
	scanf("%d %d" , &x,&a);/* 入力して、変数1 つに正しくセットできたか？*/
	
  if(x<a){
    n=0;
  }else{
    n=10;
  }
	printf("%d",n);
}