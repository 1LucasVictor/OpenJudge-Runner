#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
  int n,m,s[10],c[10],i,j,ma,mi,tes[3];
  
 scanf("%d",&n);
 scanf("%d",&m);
 for(i=0;i<m;i++){
   scanf("%d",&s[i]);
   scanf("%d",&c[i]);
 }
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

    
    