#include <stdio.h>
int main(){
  int a[3],f=0,n,i,j;
  scanf("%d",&n);
  for(j=0;j<n;j++){
    for(i=0;i<3;i++)scanf("%d",&a[i]);
    for(i=0;i<3;i++){
      if(a[i%3]*a[i%3]+a[(i+1)%3]*a[(i+1)%3]==a[(i+2)%3]*a[(i+2)%3])f=1;
    }
    if(f==0)printf("NO\n");
    else printf("YES\n");
    f=0;
  }
  return 0;
}