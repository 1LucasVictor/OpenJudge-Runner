#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define ll long long
long long min(long long a, long long b){
    if(a < b) return a;
    else return b;
}
long long max(long long a, long long b){
    if(a < b) return b;
    else return a;
}
int main(){
  int n;
  scanf("%d",&n);
  if(n%10==3){
    printf("bon");
  }
  else if(n%10==0 || n%10==1  || n%10==6 || n%10==8){
    printf("pon");
  }
  else{
    printf("hon");
  }
  return 0;
}