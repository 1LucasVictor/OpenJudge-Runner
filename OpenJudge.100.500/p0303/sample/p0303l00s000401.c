#include<stdio.h>
long long n,k,L,R,M;
long long t[100000];
   
int check(long long x){
  long long i,id=0,cnt=0;
  for(i=0;i<n;i++){
    if(cnt+t[i]>x){
      cnt=t[i];
      id++;
    }else{
      cnt+=t[i];
    }
    if(id==k)return 0;
  }
  return 1;
}
   
int main(){
  int i;
  scanf("%d %d",&n,&k);
  L=1;
  for(i=0;i<n;i++){
    scanf("%d",&t[i]);
    L=(L<t[i]?t[i]:L);
  }
   
  R=1000000000LL;
  while(L<R){
    M=(L+R)/2;
    if(check(M)==1){
      R=M;
    }else{
      L=M+1;
    }
  }
  printf("%d\n",L);
  return 0;
}