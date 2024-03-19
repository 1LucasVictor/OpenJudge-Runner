#include<stdio.h>
#include<math.h>

#define MAX 10000

int isprime(int x){

  int i;

  if(x == 2){
    return 0;
  }

  if(x < 2 || x%2 == 0){
    return -1;
  }

  for(i = 3;i <= sqrt(x);i += 2){
    if(x%i == 0){
      return -1;
    }
  }

  return 0;
}

int main(){

  int i;
  int num;
  int cnt = 0;
  int temp;

  scanf("%d",&num);

  for(i = 0;i < num;i++){

    scanf("%d",&temp);

    if(isprime(temp) == 0){
      cnt++;
    }
  }

  printf("%d\n",cnt);

  return 0;
}