#include <stdio.h>

int main(){
	
  	int a[5],i,j,k;
    for(i=0;i<5;i++){
      scanf("%d",&a[i]);
    }
  	scanf("%d",&k);
  	
  	for(i=0;i<5;i++){
      for(j=i+1;j<5;j++){
        if(a[j]-a[i]>k){
          printf(":(\n");
          return 0;
        }
      }
    }
   
  	printf("Yay!\n");
  
	return 0;
  	
}