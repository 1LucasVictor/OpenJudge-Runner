#include<stdio.h>
#include<stdlib.h>
#include<math.h>
  
#define N 10000
  
int keisan(int);
int main(){
  int i,j,num;
  int S[N];
  int count = 0;
  while(1){
    scanf("%d",&num);
    if(num >= 1 && num <= N)break;
  }
  for(i = 0;i<num;i++){
    scanf("%d", &S[i]);
  }
  for(i = 0;i<num;i++){
    if(keisan(S[i]) == 1)count++;
       }
    printf("%d\n",count);
  
    return 0;
  
  }
int keisan(int a){
  int i;
  if(a==2)return 1;
  if(a < 2 || a%2 == 0)return 0;
  i = 3;
  while(i <= sqrt(a)){
    if(a%i == 0)return 0;
    i = i+2;
  }
  return 1;
}

