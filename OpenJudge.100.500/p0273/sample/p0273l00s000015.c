#include <stdio.h>
#define MAX 44

int f(int i){
  if(i==0 || i==1){
    return 1;
  }

  return f(i-2)+f(i-1);
}
int main()
{
  /* 変数の宣言 */
  int n;
  int f0, f1, f2;
 
 
  scanf("%d",&n);
  
  printf("%d\n",f(n));
 
  return 0;
}

