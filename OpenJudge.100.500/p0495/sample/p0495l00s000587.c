#include<stdio.h>
int main()
{
char a[3];
  int i;
  for(i=0;i<3;++i)
  {scanf("%c",&a[i]);}
if(a[0]=='A' && a[1]=='A' && a[2]=='A') printf("No");
else if(a[0]=='B' && a[1]=='B' && a[2]=='B') printf("No");
else printf("Yes");
 
return 0;
}