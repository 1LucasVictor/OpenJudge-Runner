#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
 
 
void swap (int *x, int *y) {
  int temp;    
 
  temp = *x;
  *x = *y;
  *y = temp;
}
 
int gcd(int a,int b){
  if(a<b){
    swap(&a,&b);
  }
 
  if(b==0){
    return a;
  }
 
  int r=a%b;
  while(r!=0){
    a = b;
    b = r;
    r = (a%b);
  }
 
  return b;
}
 
/* クイックソート */
int dn(const void*a,const void*b){return*(int*)b-*(int*)a;}
 
 
int modpow(int a,int n,int mod){
  int ans=1;
  while(n>0){
    if(n & 1){
      ans=ans*a%mod;
    }
    a=a*a%mod;
    n/=2;
  }
  return ans;
}
 
int max(int a,int b){
  if(a<b){
    return b;
  }
  else{
    return a;
  }
}
 
int min(int a,int b){
  if(a<b){
    return a;
  }
  else{
    return b;
  }
}
 
void chmax(int *a,int b){
  if(*a < b){
    *a = b;
  }
 
  return;
}
 
void chmin(int *a,int b){
  if(*a > b){
    *a =b;
  }
 
  return;
}
 

int main(void){
  int a;
  int b=0,c=0;
  for(int i=0; i<3; i++){
    scanf("%d",&a);
    if(a==5){
      b++;
    }else if(a==7){
      c++;
    }
  }
  if(b==2 && c==1){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  return 0;
}