#include <stdio.h>
int main(void){
  int i,j;
  int ii[200001];
  int len,flg;
  scanf("%d",&len);
  for(i=0;i<len;i++){
    scanf("%d",&ii[i]);
  }
	flg =0;
  for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
//		printf("i%d j%d\n",ii[i],ii[j]);
      if(ii[i] == ii[j]){
		flg = 1;
      }
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