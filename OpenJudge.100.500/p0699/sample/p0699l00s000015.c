#include <stdio.h>
int main(){
 int a[3],b[3],i;
  scanf("%d %d %d",&a[0],&a[1],&a[2]);
  b[0]=0;
  b[1]=0;
  b[2]=0;
  for(i=0;i<3;i++)
    if(a[i]==5)b[0]++;else if(a[i]==7)b[1]++;else b[2]++;
  if (b[0]==2&&b[1]==1) printf("YES"); else printf("NO");
  
  return 0;
  
}
