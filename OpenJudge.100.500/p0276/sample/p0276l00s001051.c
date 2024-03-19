#include<stdio.h>

main(){
  int i,n,top,k,v[101];
  int a[101][101],j;

  for(i=0;i<101;i++){
    for(j=0;j<101;j++){
      a[i][j]=0;
    }
  }
  
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&top,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v[j]);
      a[top-1][v[j]-1]=1;
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d", a[i][j]);
      if(j!=n-1)
	printf(" ");
    }
    printf("\n");
  }

  return 0;
}