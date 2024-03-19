#include<stdio.h>

int main(){
  int i,j,k,n,a[10000],prime=0;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++){
    for(k=2;k<a[i];k++){
      if(a[i]%k==0)break;
    }
    if(k==a[i]) prime++;
  }
  printf("%d\n",prime);
} 