#include <stdio.h>
#include <math.h>
int main(void){
  int mi,ma,i,j,n,m,s[10],c[10];
  int tes[10];
  scanf("%d %d",&n,&m);
  for(i=0;i<m;i++) scanf("%d %d",&s[i],&c[i]);
  
  if(n==1){
    ma=9;
    mi=0;
  }else{
    ma=pow(10,n)-1;
    mi=pow(10,n-1);
  }
  for(i=mi;i<=ma;i++){
    tes[0]=i/(int)pow(10,n-1);
    if(n>=2) tes[1]=(i-tes[0]*(int)pow(10,n-1))/(int)pow(10,n-2);
    if(n>=3) tes[2]=(i-tes[0]*(int)pow(10,n-1)-tes[1]*(int)pow(10,n-2));

    for(j=0;j<m;j++){
      if(tes[s[j]-1]!=c[j]) break;
    }
    if(j==m){
      printf("%d",i);
      return 0;
    }
  }
  printf("-1");
  return 0;
}