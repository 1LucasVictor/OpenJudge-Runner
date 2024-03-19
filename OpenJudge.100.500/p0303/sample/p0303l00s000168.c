#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int n,k;

//与えられたWに対して、各トラックの積載上限をｐとした時にすべて積み込めるかを判定する。できるのなら１を、できないのなら０を返す。
int judge(int *W,int p){
  int i;
  int num=1;
  int judge=0;
  for(i=0;i<n;i++){
    if(judge + W[i] >p){
      if(judge==0) return 0;
      num+=1;
      if(num>k) return 0;
      i-=1;
      judge=0;
    }
    else judge+=W[i];
  }
  return 1;
}




int main(){
  int *W;
  int i,j;
  int max=0;

  scanf("%d%d",&n,&k);
  W=malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    scanf("%*[ \n]%d",&W[i]);
    if(W[i] > max) max=W[i];
  }
 
  int a,b,p;
  a=max;
  b=n*max;

  while(1){
    if(a==b) break;
    p=(a+b)/2;
    if(judge(W,p)==1) b=p;
    if(judge(W,p)==0) a=p+1;   
  }//pの最適値の下限をaが、上限をbが与える。aとbを二分探索で更新していく。

  printf("%d\n",a);
  return 0;
}


   
  
