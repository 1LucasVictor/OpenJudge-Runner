#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ull unsigned long long int
#define ll long long
#define l long
#define sd(x) scanf("%d",x) 
#define sld(x) scanf("%ld",x) 
#define slld(x) scanf("%lld",x) 
#define sllu(x) scanf("%llu",x) 
#define ss(x) scanf("%s",x) 

int main(){
  ll A,B,C,K;
  slld(&A);slld(&B);slld(&C);slld(&K);
  if(A>=K)printf("%lld",K);
  else if(A+B>=K)printf("%lld",A);
  else printf("%lld",2*A-K+B);
};
