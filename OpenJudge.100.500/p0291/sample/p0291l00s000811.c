#include<stdio.h>

#define RMAX 1000000
#define Max 200000
#define Min 2

int main(){
  int n,i,j,r,s;
  int R[RMAX];
  
  scanf("%d",&n);
  if(n>=Min && n<=Max)
    for(i=0; i<n; i++){
      scanf("%d",&R[i]);
    }

  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if(i==0 && j==1) r=R[1]-R[0];
      else{
	if(R[j]-R[i]>r) r=R[j]-R[i];
      }
    }
  }

  printf("%d\n",r);
	
  
  return 0;
}

