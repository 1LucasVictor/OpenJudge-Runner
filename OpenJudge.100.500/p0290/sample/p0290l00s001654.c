#include<stdio.h>
#include<math.h>

int isPrime(int x ,int y){
  int i;
  if(y < 2){
    return 0;
  }else if(y == 2){
    return 1;
  }
  if(y % 2 == 0){
    return 0;
  }
  
  
  for(i = 3;i <= x;i+=2){
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
  int i;
  int array[10001];
  int ary[10001];
  scanf("%d",&n);
  for(i = 0;i<n;i++){
    scanf("%d",&array[i]);
    
  }
  for(i=0;i<n;i++){
    ary[i] = ((int)sqrt(array[i]));
  result = isPrime(ary[i],array[i]); 
  cnt += result;
  }

  printf("%d\n",cnt);
    
  
  return 0;
}

