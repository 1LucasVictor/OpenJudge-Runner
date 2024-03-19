#include<stdio.h>
int main(){
  int n,x,i,j,k,a;
  int d=0;
  for(a=0;a<10000;a++){
    d=0;
  scanf("%d %d",&n,&x);
  if(n,x == 0)
    break;
  for(i=1;i<=n-2;i++){
    for(j=1;j<=n-1;j++){
      for(k=1;k<=n;k++){
	if(i == j || j == k || i == k){
	}else if(i > j || j > k || i > k){
	}else if(i+j+k == x){
	  d++;
	}
      }
    }
  }
  printf("%d\n",d);
  }
  return 0;
}