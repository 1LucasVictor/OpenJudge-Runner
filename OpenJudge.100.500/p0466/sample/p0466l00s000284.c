#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ull unsigned long long int
#define ll long long
#define l long
#define plld(x) printf("%lld",x)
#define pld(x) printf("%ld",x)
#define pllu(x) printf("%llu",x)
#define pd(x) printf("%d",x)
#define sd(x) scanf("%d",x) 
#define sld(x) scanf("%ld",x) 
#define slld(x) scanf("%lld",x) 
#define sllu(x) scanf("%llu",x) 
#define ss(x) scanf("%s",x) 

int main(){
  char S[10],T[11];
  ss(S);
  ss(T);
  int len=strlen(S);
  for(int a=0;a<len;a++){
    if(S[a]!=T[a]){
      printf("No");
      break;
    }
  else if(a==len-1)printf("Yes");
  };
};
