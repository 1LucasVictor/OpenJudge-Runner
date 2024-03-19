#include<stdio.h>

#define MAX 10001

int check(int n){
  int i,j,p[MAX];
  for(i=0;i<MAX;i++)p[i]=1;
  for(i=2;i*i<=n;i++)
    if(p[i])
      for(j=i*2;j<MAX;j+=i)
        p[j]=0;
  return p[n];
}
    
  
/*
int check(int n){
  int i;
  if(n<2)return 0;
  if(n==2)return 1;
  if(n%2==0)return 0;
  for(i=3;i<=n/i;i+=2){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}*/

/*
int check(int n){
  int i;
  if(n<2)return 0;
  if(n<4)return 1;
  if(n%2==0 || n%3==0)return 0;
  for(i=5;i*i<=n;i+=6)
    if(n%i==0 || n%(i+2)==0)
      return 0;
  return 1;
}
*/

/*
int bf(int n){
  int i;
  for(i=2;i<n;i++)
    if(n%i==0)
      return 0;
  return 1;
}*/


int main(){
  int i,n,ans=0,a;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    ans+=check(a);
  }
  printf("%d\n",ans);
  return 0;
}

