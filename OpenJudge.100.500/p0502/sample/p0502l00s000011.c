#include<stdio.h>
#include<stdlib.h>

int main(){
int N,j=1;
  scanf("%d",&N);
  int *a=(int*)malloc(sizeof(int)*N);
  for(int i=0;i<N;i++){
	scanf("%d",&a[i]);
    if(a[i]%2==0 && a[i]%3!=0 && a[i]%5!=0){
    	j=0;
      break;
    }
  }
  if(j==1)printf("APPROVED\n");
  else printf("DENIED\n");
 return 0; 
}