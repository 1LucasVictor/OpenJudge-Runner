#include<stdio.h>
int main (void){
  int n,m,k,i,j,suma,sum,count,ans;
  int a[200000],b[200000];
  scanf("%d",&n);
  scanf("%d",&m);
  scanf("%d",&k);
  
  for(i=0;i<n;i++){scanf("%d",&a[i]);}
  for(i=0;i<m;i++){scanf("%d",&b[i]);}
  
  suma=0;count=0;ans=0;
  sum=0;i=0;j=0;
  
  while(k>=suma){suma+=a[i];sum=suma;count=i;
          if(k>=sum){  i++;    
    while(k>=sum){count=i+j;sum+=b[j];j++;
    }}
    if(count>ans){ans=count;j=0;}
  
  }
  
  printf("%d",ans);
  
}