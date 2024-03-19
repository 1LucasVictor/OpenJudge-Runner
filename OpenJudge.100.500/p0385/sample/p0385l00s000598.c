#include <stdio.h>
#include <string.h>
int main(void)
{
  char str[1110];
  int a[1110];
  int n;
  int i;
  int j=0;

  while (1) {
    scanf("%s",str);
    if (str[0]=='0') break;
    n=strlen(str);
    for (i=0; i<n; i++) {
      a[j]+=str[i]-'0';
    }
    j++;
  }

  for(i=0; i<j; i++) {
    printf("%d\n",a[i]);
  }
  return 0;
}