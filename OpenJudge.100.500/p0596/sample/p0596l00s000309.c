#include <stdio.h>
#define abs(a) ((a)>(0)?(a):-(a))
int main(){
  char a;
  int b=0,c=0;
  while(scanf("%c",&a)!=EOF){
  if(a=='0')b++;
  else c++;
  }
  if(b>0&&c>0)printf("%d",b+c-(abs(b-c)));
  else printf("0");
}