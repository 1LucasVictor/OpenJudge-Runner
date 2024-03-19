#include<stdio.h>

main(){
  int i,n;
  int st[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&st[i]);
  }
  for(i=1;i<=n;i++){
    printf("%d",st[n-i]);
    if(i==n){
      printf("\n");
    }else{
      printf(" ");
    }
  }
}

