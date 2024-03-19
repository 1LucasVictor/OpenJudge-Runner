#include<stdio.h>
#include<math.h>
int prime(int);


int main(){
  int i,j,n,s,a=0,c=0;
  scanf("%d",&s);
  for(i=0;i<s;i++){
    scanf("%d",&n);
    a= prime(n);
    if(a==1) c++;
  }
  printf("%d\n",c);
  return 0;
}

int prime(int x){
  int i;
  if(x<=1)return 0;
  for(i=2;i<=sqrt(x);i++){
      if(x%i==0){
	return 0;
      }
  }
  return 1;
      }

