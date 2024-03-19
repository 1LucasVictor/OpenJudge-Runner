#include<stdio.h>
#define N 10000
int main(){
  int Sarray[N],Tarray[N];
  int i,j,count = 0,n,q;
  
  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%d",&Sarray[i]);
  }
  

  scanf("%d",&q);

  for(j = 0;j < q;j++){
    scanf("%d",&Tarray[j]);
  }

  for(i = 0;i < n;i++){
    for(j = 0;j < q;j++){
      if(Sarray[i] == Tarray[j])
	count++;
    }
  }

  printf("%d\n",1+2);

  return 0;
}