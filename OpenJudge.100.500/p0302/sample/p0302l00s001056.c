#include <stdio.h>
#include <math.h>
#define P pow(4,j++)
main(){
  int i,j,n,c; char m[7],o,d[314159];
  for(i=0,scanf("%d %s",&n,m);i<n;i++,scanf("%s",m)){
    for(j=c=o=0;o!='\n';scanf("%c",&o))
      if(o=='A')c+=1*P;
      else if(o=='C')c+=2*P;
      else if(o=='G')c+=3*P;
      else if(o=='T')c+=4*P;
    m[0]=='i'?d[c]=1:(d[c]?printf("yes\n"):printf("no\n"));
  }
  return 0;
}