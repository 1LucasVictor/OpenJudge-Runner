#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  int s[10]={0};
  s[a]++;s[b]++;s[c]++;
  if(s[5]==2&&s[7]==1) printf("YES");
  else printf("NO");
  return 0;
}