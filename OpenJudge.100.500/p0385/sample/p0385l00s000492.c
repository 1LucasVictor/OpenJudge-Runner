#include <stdio.h>

int main(void) {
char a[1000];
int b,c;
for(int d=0;;d++){
  scanf("%s",&a);
  if(a[0]=='0')
  break;
  b=0;
  for(c=0;a[c]!='\0';c++)
  b+=a[c]-'0';
  printf("%d\n",b);
}
  return 0;
}
