#include<stdio.h>

int main()
{
  int i,a=0,b=0;
  char s[100000];
  scanf("%s",s );
  for(i=0 ; s[i]!='\0' ; ++i){
    if(s[i]==49){
      a++;
    }else{
      b++;
    }
  }
  a -= b;
  if(a<0) a = -a;
  i -= a;
  printf("%d\n",i );
  return 0;
}