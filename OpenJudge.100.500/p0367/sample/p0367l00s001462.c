#include <stdio.h>
int main(void)
{
  int a,b,c,i,atai;
  atai=0;
  scanf("%d %d %d",&a,&b,&c);
  for(i=a;i<=b;i++){
    if((c%i)==0){
      atai+=1;
    }
  }
  printf("%d\n",atai);
  return 0;
}