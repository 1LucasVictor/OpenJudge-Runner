#include <stdio.h>
#include <string.h>
	char A[12],B[12];
int main(){

	scanf("%s%s",A,B);
	int n= strlen(A);
    int i=0;
    for(i=0;i<n;i++){
      
      if(A[i]!=B[i]){
        printf("No\n");
        return 0;
      }
    }
  	if(B[n]>0){
      printf("Yes\n");
      return 0;
    }
  
	printf("No\n");
	return 0;
}
