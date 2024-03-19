#include <stdio.h>
#include <math.h>
main(){
  int i,j,n,code;
  char cm[7],o,dict[262145];
  for(i=0,scanf("%d",&n);i<n;i++){
    scanf("%s",cm);
    j=code=o=0;
    while(o!='\n'){
      scanf("%c",&o);
      if(o=='A') code+=1*pow(4,j);
      else if(o=='C') code+=2*pow(4,j);
      else if(o=='G') code+=3*pow(4,j);
      else if(o=='T') code+=4*pow(4,j);
      else j--;
      j++;
    }
    if(cm[0]=='i') dict[code] = 1;
    if(cm[0]=='f') dict[code] ? printf("yes\n") : printf("no\n");
  }
  return 0;
}