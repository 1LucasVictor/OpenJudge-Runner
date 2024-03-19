#include <stdio.h>

#define N 100000
#define M 10000
#define O 0
#define I 1
#define W 2

int n,k;
double T[N];

int check(double);
int solve(void);

int main(){
  int i;
  double a;
  scanf("%d%d",&n,&k);
  for(i=O;i<n;i++){
    scanf("%lf",&T[i]);
  }
  a=solve();
  printf("%d\n",(int)a);
  return 0;
}
int check(double p){
  int i=O,j;
  double s;
  for(j=O;j<k;j++){
    s=O;
    while(s+T[i]<=p){
      s+=T[i];
      i++;
      if(i==n){
	return n;
      }
    }
  }
  return i;
}

int solve(){
  double left=O;
  double right=N*M;
  double mid;
  int v;

  while(right-left>I){
    mid=(left+right)/W;
    v=check(mid);
    if(v>=n){
      right=mid;
    }
    else{
      left=mid;
    }
  }
  return right;
}

