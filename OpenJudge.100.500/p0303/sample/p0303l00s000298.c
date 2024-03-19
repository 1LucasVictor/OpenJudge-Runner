#include <stdio.h>
int n,k,w[10000];
//int Min(int []);
int main(){
  int i,P=0,j,min;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
    scanf("%d",&w[i]);
  }
 

  j=0;  
  while(w[j]!=0){
      min=w[j]+w[j+1];
      i=j+j+1;
      if(min>w[i]){
	P=min;
	min=0;
	j+=i;
      }
      j++;
  }

  
  printf("%d\n",P);
  return 0;
}