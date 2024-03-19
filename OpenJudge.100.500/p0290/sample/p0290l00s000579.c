#include <stdio.h>
#define N 10000

int main(){

  int A[N];
  int i,count=0,num,j,s,c;

  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%d",&A[i]);
  }
  
  for(s=0;s<num;s++){ 
    if(A[s]%2==0 && A[s]!=2){
      continue;
    }
    else if(A[s]==2){
      count++;
      continue;
    }
 else if(A[s]>1){
      j=1;
      c=1;
      for(j=3;j<=A[s];j+=2){
	if(j==A[s]){
	  count++;
	}
	c=A[s]%j;
	 if(c ==0 && A[s]!=j){
	  break; 
	}
   
      }
    
    }
  }   

  printf("%d\n",count);
}

