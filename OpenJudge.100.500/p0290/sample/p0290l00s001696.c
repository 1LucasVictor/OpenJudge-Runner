#include<stdio.h>
#include<math.h>

int main(){
  int i,j,n,flag,A[10000],num=0;
  scanf("%d",&n);
  for(i = 0; i < n;i++) scanf("%d",&A[i]);

  for(i = 0; i < n;i++){
    flag = 0;
    for(j = 2; j <= sqrt((int)A[i]);j++){
      if(A[i] % j == 0 && A[i] != 2){
	flag = 1;
	break;
      }
    }
    if(flag == 0) num += 1;
  }
  printf("%d\n",num);
  return 0;
}

