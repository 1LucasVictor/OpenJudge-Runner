#include<stdio.h>
int main()
{
char a[3];
  int i;
  for(i=0;i<3;++i)
  {scanf("%c",&a[i]);}
if(a=="AAA") printf("No");
else if(a=="BBB") printf("No");
else printf("Yes");
return 0;
}