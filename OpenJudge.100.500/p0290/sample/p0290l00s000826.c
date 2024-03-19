#include<stdio.h>
#include<math.h>
int so(int);
int main(){
  int n,i,num,sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&num);
    if(num==2){
      sum++;
      continue;
    }else if(num%2==0){
      continue;
    }
    if(so(num)==1){
      sum++;
    }
  }
  printf("%d\n",sum);
}

int so(int num){
  int i,a;
  a=sqrt(num);
  for(i=3;i<=a;i=i+2){
    if(num%i==0){
      return 0;
    }
  }
  return 1;
}

