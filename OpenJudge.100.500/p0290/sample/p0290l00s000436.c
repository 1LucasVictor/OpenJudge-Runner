#include<stdio.h>
int prime(int);


int main(){
  int i,j,n[10000],s,a=0,c=0;
  scanf("%d",&s);
  for(i=0;i<s;i++){
    scanf("%d",&n[i]);
  }
  for(i=0;i<s;i++){
    a= prime(n[i]);
    if(a==1) c++;
  }
  printf("%d\n",c);
  return 0;
}

int prime(x){
  int i=3;
  if(x==2)return 1;
  else if(x<2 || x%2==0) return 0;
  else {
    while(i<=x/2){
      if(x%i==0){
	return 0;
      }
      i=i+2;
	}
  }
  return 1;
      }

