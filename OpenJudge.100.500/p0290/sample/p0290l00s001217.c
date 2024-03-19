#include<stdio.h>
#define N 10000
main(){
  int n,i,k,j,a[N],sosu=0,yakusu;
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    scanf("%d",&a[i]);
  }
  
  for(j = 0;j < n;j++){
    yakusu=0;
    if(a[j]==2)sosu++;
    if(a[j]%2==0)continue;
    else {
      for(k=1;k<=a[j];k++){
	if(a[j] % k ==0) yakusu++;
      }
      if(yakusu == 2) sosu++;
    }
  }
  printf("%d\n",sosu);
  return 0;
} 