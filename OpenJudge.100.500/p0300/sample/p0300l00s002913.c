#include<stdio.h>
#define N 100000

int main(){
  int S_num[N];
  int T_num[N];
  int i,j;
  int num_in_1;
  int num_in_2;
  int count=0;

  scanf("%d",&num_in_1);

  for(i=0;i<num_in_1;i++){
    scanf("%d",&S_num[i]);
  }

  scanf("%d",&num_in_2);

  for(i=0;i<num_in_2;i++){
    scanf("%d",&T_num[i]);
  }

  for(i=0;i<num_in_1;i++){
    for(j=0;j<num_in_2;j++){
      if(S_num[i]==T_num[j]){
	count++;
      }
    }
  }

  printf("%d\n",count);

  return 0;
}