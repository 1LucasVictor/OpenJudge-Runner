#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

int main(){
  int n;
  scanf("%d",&n);
  if(n%2==0)
  printf("%d",n/2);
  else
    printf("%d",n/2+1);
  return 0;
}