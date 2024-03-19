#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
int main(void){
  int i,j;
  int ii[200001];
  int len,flg;
  scanf("%d",&len);
  for(i=0;i<len;i++){
    scanf("%d",&ii[i]);
  }
qsort(ii, len, sizeof(int), compare_int);
//  for(i=0;i<len;i++){
//		printf("i%d\n",ii[i]);
//  }
  flg =0;
  for(i=0;i<len;i++){
      if(ii[i] == ii[i+1]){
		flg = 1;
      }

  }
	if(flg == 1){
		printf("NO");
    }
  	else{
		printf("YES");
    }
  return 0;
}