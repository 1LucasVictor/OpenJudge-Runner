#include <stdio.h>
int l[5001];
int main()
{
  int n,i,j,s;
  for(;;){
    scanf("%d",&n);
    if(n==0)break;
    s=0;
    for(i=1;i<=n;i++){
      scanf("%d",&j);
      s+=j;
      l[i]=s;
    }
    s=0;
    for(i=1;i<=n;i++){
      for(j=0;j<i;j++){
	if(s<l[i]-l[j]) s=l[i]-l[j];
      }
    }
    printf("%d\n", s);
  }
  return 0;
}