#include<stdio.h>

int main(void){
  unsigned int i,j=0,n,m,k;
  unsigned long time=0,a[20000]={0},b[200000]={0}; 
  scanf("%d %d %d",&n,&m,&k);
  for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
  }
  for(i=0;i<n;i++){
    scanf("%ld",&b[i]);
  }
  i=0;
  while(1){
    time+=a[i];
    if(time>k){           
      break;
    }
    else if(a[i]==0&&b[i]==0){
      j++;
      break;
    }
    j++;
    time+=b[i];
    if(time>k){
     
      break;
    }
    else if(a[i]==0&&b[i]==0){
      j++;
      break;
    }
    j++;
    i++;
    
  }
  printf("%d",j);
  return 0;
}