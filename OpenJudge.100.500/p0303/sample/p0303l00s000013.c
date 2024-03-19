#include<stdio.h>

long long int check(int);
long long int solve();

long long int n,van_num;
long long int cab[100000];

int main(){
  long long int i;
  long long int tmp;

  scanf("%d %d",&n,&van_num);
  for(i=0;i<n;i++){
    scanf("%d",&cab[i]);
  }
  tmp=solve();
  printf("%d\n",tmp);
  
  return 0;
}

long long int check(int max_burd){
  long long int i=0,j;
  long long int van_burd;
  for(j=0;j<van_num;j++){
    van_burd=0;
    while(van_burd+cab[i]<=max_burd){
      van_burd+=cab[i];
      i++;
      if(i==n) return n;
    }
  }
  return i;
}

long long int solve(){
  long long int left=0;
  long long int right=100000*10000;
  long long int mid;
  long long int num_pie;

  while(right-left>1){
    mid=(left+right)/2;
    num_pie=check(mid);
    if(num_pie>=n){
      right=mid;
    }else{
      left=mid;
    }
  }

  return right;
}

