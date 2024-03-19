#include<stdio.h>
#include<math.h>

int main(){
  int n,i,a,b,c;
  scanf("%d",&n);
  for (i = 0, a = 1, b = 1, c = 0; i <= n; i++){
    a = b;
    b = c;
    c = a + b;
  }
  printf("%d\n",c);
  return 0;	 
}

