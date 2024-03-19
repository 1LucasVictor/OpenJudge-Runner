#include<stdio.h>

int main(void){
  
  int N,a[200001],i,j,w,c=0;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<N-1;i++){
    for(j=i;j<N;j++){
      if(a[i]>a[j]){
        w=a[i];
        a[i]=a[j];
        a[j]=w;
      }
    }
  }
  for(i=0;i<N-1;i++){
    if(a[i]==a[i+1]){
      printf("NO\n");
      c=1;
      return 0;
    }
  }
  if(c==0){
    printf("YES\n");
    return 0;
  }
  
      
      

}