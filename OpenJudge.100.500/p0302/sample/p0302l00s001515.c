#include <stdio.h>
#include <math.h>
main(){
  int i,j,n,code;
  char cm[7],op,dict[262145];
  for(i=0,scanf("%d %s",&n,cm);i<n;i++,scanf("%s",cm)){
    for(j=code=op=0;op!='\n';scanf("%c",&op))
      if(op=='A') code+=1*pow(4,j++);
      else if(op=='C') code+=2*pow(4,j++);
      else if(op=='G') code+=3*pow(4,j++);
      else if(op=='T') code+=4*pow(4,j++);
    if(cm[0]=='i') dict[code] = 1;
    if(cm[0]=='f') dict[code] ? printf("yes\n") : printf("no\n");
  }
  return 0;
}