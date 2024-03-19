# include <stdio.h>

int main(){
  int a,b,x;
  scanf("%d %d %d",&a,&b,&x);
  if(x>a+b||x<a) puts("NO");
  else if(x-a<=b) puts("YES");
  else puts("NO");
  return 0;
}
