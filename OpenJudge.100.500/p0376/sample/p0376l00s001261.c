#include <stdio.h>

int main(){

  int i,k,n;

  scanf("%d",&n);

  int a[n];

  for(i=1;i<=n;i++){

    scanf("%d",&a[i-1]);

  }

  for(k=n;k>=1;k--){

    printf("%d",a[k-1]);

  	if(k==1)
  		break;
  	
  	printf(" ");
  	
  } 

  printf("\n"); 

  return 0;

}