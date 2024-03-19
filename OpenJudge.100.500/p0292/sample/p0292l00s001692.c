#include <stdio.h>
#define N 100
int main(){
  int n,i=0,j,c=0,s,f[N],flag=1,t,x;
  scanf("%d",&n);
  while(i<n){
    scanf("%d",&f[i]);
    i++;
  }
  while(flag){
    flag=0;
    for(j=n-1;j>=1;j--){
      if(f[j]<f[j-1]){
	s=f[j-1];
	f[j-1]=f[j];
	f[j]=s;
	c++;
	flag=1;
      }
    }
  }
  x=0;
  while(x<n){
    printf("%d ",f[x]);
    x++;
  }
  printf("\n");
  printf("%d\n",c);
  return 0;
}

  











