#include <stdio.h>
int main(){
  int s[14],h[14],c[14],d[14],i,su,num;
  char jo;

  for(i=0;i<14;i++) s[i]=1;
  for(i=0;i<14;i++) h[i]=1;
  for(i=0;i<14;i++) c[i]=1;
  for(i=0;i<14;i++) d[i]=1;
  scanf("%d",&su);

  for(i=0;i<su;i++){
    scanf("%c",&jo);
    scanf("%c %d",&jo,&num);
    if(jo=='S') s[num] = 0;
    else if(jo=='H') h[num] = 0;
    else if(jo=='C') c[num] = 0;
    else if(jo=='D') d[num] = 0;
  }
  for(i=1;i<14;i++) if(s[i]==1) printf("S %d\n",i);
  for(i=1;i<14;i++) if(h[i]==1) printf("H %d\n",i);
  for(i=1;i<14;i++) if(c[i]==1) printf("C %d\n",i);
  for(i=1;i<14;i++) if(d[i]==1) printf("D %d\n",i);
  return 0;
}