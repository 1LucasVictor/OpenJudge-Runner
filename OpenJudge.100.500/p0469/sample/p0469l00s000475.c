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
  int k,a,b;
  scanf("%d %d %d",&k,&a,&b);
  for(int i=a;i<=b;i++){
    if(i%k==0){
      printf("OK");
      return 0;
    }
  }
printf("NG");
  return 0;
}