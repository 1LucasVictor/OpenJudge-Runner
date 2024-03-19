#include<stdio.h>
int main(void)
{
  int i,a;
  char str[3];
  a=0;
  scanf("%s",str);
  for (i=0;i<3;i++){
    if(str[i]=='1'){
      a++;
    }
  }
  printf("%d\n",a);
  return 0;
}