#include<stdio.h>
int main(){
  int n,k,w[100000],l,m,r,i,j,flag,count=0;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++){
    scanf("%d",&w[i]);
  }
  l=0;
  r=100000*10000;
  while(l+1<r){
    m=(l+r)/2;
    j=0;
    for(i=0;i<k;i++){    
      count=0;
      flag=0;
      for(;j<n;j++){
	count+=w[j];
	if(count>m && i==k-1){flag=1;break;}
	if(count>m){break;}
      }
      if(flag==1 || j==n)break;
    }
    if(flag==1)l=m;
    else r=m;
  }
  printf("%d\n",r);
  return 0;
}
    
      
    

