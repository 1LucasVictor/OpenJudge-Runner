#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int powx(long long int x,long long int y){
  int j;
  int a;
  a=1;
  for(j=1;j<y+1-x;j++){
   a=a*10;
  }
  return(a);
}


int main(){

 long long int N,M;
  scanf("%lld %lld",&N,&M);

/*
  char A[];
  scanf("%s",A);
  */

  
  long long int s[M+1],c[M+1];
  long long int i;
  for(i=1;i<=M;i++){
   scanf("%lld %lld",&s[i],&c[i]);
   }
  
  long long int A;
  A=0;
  int counter[N+1];
  for(i=1;i<=N;i++){
    counter[i]=0;
   }

  for(i=1;i<=M;i++){

    if(counter[s[i]]==0){
      A += c[i]*powx(s[i],N);
      counter[s[i]]=1;
    }
    else if( (A/powx(s[i],N))%10 != c[i]){
      printf("-1");
      return(0);
    }
    else{}


   }  
  if(N == 1 && A == 0){
    printf("0");
  }

  else if(A/powx(1,N) ==0){
    printf("-1");
  }
  else{
    printf("%lld",A);
  }





 return(0);
 }
