#include<stdio.h>

void outputnum();


int main(void){
  int n,x;
  scanf("%d%d",&n,&x);
  while(n!=0 && x!=0){
    outputnum(n,x);
    scanf("%d%d",&n,&x);
  }
  return 0;
}

void outputnum(int n,int x){
  int i,j,k,sum=0,com=0;
  for(i=1;i<=n-2;i++){
    for(j=i+1;j<=n-1;j++){
      for(k=j+1;k<=n;k++){
	if( x == i + j + k ){
	  com++;
	}
      }
    }
  }
  printf("%d\n",com);
}