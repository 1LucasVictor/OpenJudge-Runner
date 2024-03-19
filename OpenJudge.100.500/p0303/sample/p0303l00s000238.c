#include<stdio.h>

int check(int);
int solve();

int num,van_num;
int cab[10000];

int main(){
  int i;
  int ans;

  scanf("%d %d",&num,&van_num);
  for(i=0;i<num;i++){
    scanf("%d",&cab[i]);
  }
  ans=solve();
  printf("%d\n",ans);
  
  return 0;
}

int check(int max_burd){
  int i=0,j;
  long long int van_burd;
  for(j=0;j<van_num;j++){
    van_burd=0;
    while(van_burd+cab[i]<=max_burd){
      van_burd+=cab[i];
      i++;
      if(i==num) return num;
    }
  }
  return i;
}

int solve(){
  long long int left=0;
  long long int right=10000*10000;
  long long int mid;
  long long int num_pie;

  while(right-left>1){
    mid=(left+right)/2;
    num_pie=check(mid);
    if(num_pie>=num){
      right=mid;
    }else{
      left=mid;
    }
  }

  return right;
}