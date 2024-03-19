#include <stdio.h>

int main(void){
	int H,N,i;
  scanf("%d%d",&H,&N);
  int A[N];
  for(i=0;i<N;i++){
  	scanf("%d",&A[i]);
  }
	
  for(i=0;i<N;i++){
  	H-=A[i];
  }

  if(H<=0) printf("Yes");
  
  else printf("No");

	return 0;
}