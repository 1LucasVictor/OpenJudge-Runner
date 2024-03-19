#include<stdio.h>

int isprime(int);
int main(){
  int a,i,n,cnt=0;
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&a);
  
    if(isprime(a)){
      cnt++;
    }
    
  }
  printf("%d\n",cnt);




  return 0;
}
int isprime(int a){
  int x;
  static int i; 
  if (a < 2)
    return 0;
  else if(a==2)return 1;
    
  if(a%2==0){
    return 0;
  }
  for(i=3;i*i<=a;i++){
    if(a%i==0) return 0;
  }
  return 1;
}

  