#include<stdio.h>
#include<math.h>
int isPrime(x , y){
  int i;
  if(y <= 3 &&y > 1){
    return 1;
  }
  if(y == 1){
    return 0;
  }
  for(i = 2;i<= x;i++){
    if(y % i == 0){
      return 0;
    }
  }
    return 1;
  }


int main(){
  int n;
  int result;
  int cnt=0;
  int i,j;
  int array[101];
  int ary[101];
  scanf("%d",&n);
  for(i = 0;i<n;i++){
    scanf("%d",&array[i]);
    
  }
  for(j=0;j<n;j++){
   ary[j] = sqrt(array[j]);
  result = isPrime(ary[j],array[j]); 
  cnt += result;
  }

  printf("%d\n",cnt);
    
  
  return 0;
}

