#include <stdio.h>

int n;
int bit[5001];
int sum(int i){
  int s=0;
  while(i>0){
    s+=bit[i];
    i -=i&-i;
  }
  return s;
}
void add(int i,int x){
  while(i<=n){
    bit[i]+=x;
    i+=i&-i;
  }
}
int max(int a,int b){
  if(a<b)return b;
  else return a;
}
int main(){
  int i,j,x,s,t;
  int mx,tmp;
  while(1){
    mx=-5000000;
   
    scanf("%d",&n);
    if(n==0)break;
    for(i=0;i<=n;i++)bit[i]=0;
    for(i=1;i<=n;i++){
      scanf("%d",&x);
      add(i,x);
    }
    for(i=1;i<=n;i++){
      tmp=sum(i);
      if(mx<tmp){mx=tmp;s=0;t=i;}
    }
    for(i=1;i<n;i++){
      for(j=i+1;j<=n;j++){
	tmp=sum(j)-sum(i);
	if(mx<tmp){mx=tmp;s=i;t=j;}
      }
    }
    printf("%d\n",mx);
  }
  return 0;
}