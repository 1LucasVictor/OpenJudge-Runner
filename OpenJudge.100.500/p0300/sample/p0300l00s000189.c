#include<stdio.h>
#define N 10000

 int main(){
  int i,j,k,l,count=0,a[N],b,c[N],d;
  scanf("%d",&b);
  for(i=0;i<b;i++){
    scanf("%d",&a[i]);
  }

  scanf("%d",&d);
  for(j=0;j<d;j++){
    scanf("%d",&c[j]);
  }
  
  for(k=0;k<b;k++){
    for(l=0;l<d;l++){
      if(a[k]==c[l]){   
	count++;
      }
    }
  }
  
  printf("%d\n",count);
  
  
  
  return 0;
 }