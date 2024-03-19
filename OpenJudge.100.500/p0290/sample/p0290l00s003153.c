#include <stdio.h>

int main(){

  int x,count=0,flag=0,i,n,j;

  scanf("%d",&n);
  for(j=0;j<n;j++){
    scanf("%d",&x);
    for(i=2;i<x;i++){
      if( x%i==0){
	flag=1;
	break;
      }
    }
    if(flag==0){
      count++;
    }
    else flag=0;
    }

  printf("%d\n",count);
    return 0;

    }
    
	

