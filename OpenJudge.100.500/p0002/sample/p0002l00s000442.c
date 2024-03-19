#include <stdio.h>
int main()
{
  int a,b,c,n,i,t;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){
      t=a;a=b;b=t;
    }
    if(a<c){
      t=a;a=c;c=t;
    }
    printf("%s\n", (a*a-b*b-c*c)==0?"YES":"NO");
  }
  return 0;
}