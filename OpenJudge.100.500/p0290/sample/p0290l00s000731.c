#include <stdio.h>
#include <math.h>

int isPrime(int);

int main(){
  int i,j;

  int n,cnt=0;


  scanf("%10000d",&n);
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
    if(A[i]<2 || A[i]>100000000){
      continue;
    }


    
    cnt += isPrime(A[i]);

  


  }
 
  //output
  printf("%d\n",cnt);


  return 0;
}
int isPrime(int x){
  int i;

  if(x==2) return 1;

  if(x<2 || x%2 == 0) return 0;

  i = 3;
 

  while( i <= sqrt(x)){
      if(x%i == 0)return 0;

      i = i + 2;
    }
    return 1;
    }

