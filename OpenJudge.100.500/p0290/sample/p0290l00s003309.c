#include<stdio.h>
#define N 10000

main(){
  int n,b[N],i,j,k=0,d=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++){
    for(j=3;j<b[i];j+=2){
      if(b[i]==2) break;
      else if(b[i]%2==0) d++;
      else if(b[i]%j==0) break;
    }
    
    if(d==0) k++;
    d=0;
  }
  
  printf("%d\n",k);
  return 0;
}