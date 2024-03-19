#include <stdio.h>

int main(void) {
  int n,x,i,j,k;
  int cont=0;
  while(1){
    scanf("%d %d",&n,&x);
    if((n+x)==0)
      break;
    for(i=1;i<=(n-2);i++)
      for(j=2;j<=(n-1);j++)
	for(k=3;k<=n;k++)
	  if((i+j+k)==x&&i!=j&&i!=k&&j!=k&&i<j&&j<k)
	    cont++;
    printf("%d\n",cont);
  }
  return 0;
}