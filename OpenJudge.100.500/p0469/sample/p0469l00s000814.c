#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define F(i,a,n) for(int i=a; i<n; i++)
#define INF 100000000000 // long only


int main(){
  int k,a,b;
  scanf("%d%d%d",&k,&a,&b);
  for(int i=a;i<b+1;i++){
    if(i%7==0){
      printf("OK\n");
      return 0;
    }
  }
  printf("NG\n");
  return 0;
}