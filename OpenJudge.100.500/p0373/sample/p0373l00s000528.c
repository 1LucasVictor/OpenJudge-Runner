#include<stdio.h>
int main(){
  int a[300],b[300],i,k,u,H,W;
  for(i=0;i<300;i++){
    scanf("%d%d",&a[i],&b[i]);
    if(a[i]==0 || b[i]==0)break;
  }
  for(k=0;k<i;k++){
    for(H=1;H<=a[k];H++){
      if(H==1 || H==a[k])for(W=0;W<b[k];W++)printf("#");
      else for(W=1;W<=b[k];W++){
	  if(W==1 || W==b[k])printf("#");
	  else printf(".");
	}
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}