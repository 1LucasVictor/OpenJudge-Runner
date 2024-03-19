#include <stdio.h>
#include <string.h>

int main(void)
{

  char s[100000];
  int  n, i, a, p=0, q=0;
  scanf("%s",s);
  n=strlen(s);
  for(i=0;i<n;i++){
        if(s[i]=='0') p++;
        else if(s[i]=='1') q++;
  }
  a=0;
  if((q<p)&&(q>0)) a=q*2;
  else if((p<q)&&(p>0)) a=p*2;
  else if(p=q) a=p*2;
  printf("%d\n",a);
  return 0;
}
