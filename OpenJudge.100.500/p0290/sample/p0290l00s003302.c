#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool IsPrime(int num){
  int i;
  double sqrtNum;
  sqrtNum= sqrt(num);
  if (num < 2) return false;
  else if (num == 2) return true;
  else if (num % 2 == 0) return false;

  for (i = 3; i <= sqrtNum; i += 2){
    if (num % i == 0)
      return false;
  }
  return true;
}
int main(){
  int n,k,i,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&k);
    if(IsPrime(k))count++;
    
  }
  printf("%d\n",count);
  return 0;
  
}