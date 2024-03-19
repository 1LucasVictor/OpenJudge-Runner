#include <stdio.h>

int main()
{
  int a,b,c,i,ct;
  ct=0;
  scanf("%d %d %d",&a,&b,&c);

  for(i=a;i<=b;i++){
    if(c%i==0){
      ct++;
    }
  }
  printf("%d\n",ct);
  return 0;
}