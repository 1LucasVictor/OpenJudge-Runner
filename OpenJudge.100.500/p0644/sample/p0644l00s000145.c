#include<stdio.h>

int main()
{
  char s[3];
  int i;
  int t=0;
  scanf("%s",s);
  for(i=0;i<3;i++){
    if(s[i]=='1') t++;
  }
  printf("%d\n",t);
  return 0;
}
