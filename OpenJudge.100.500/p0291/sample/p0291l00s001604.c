// 16D8104007J Kanehiro Maho 兼弘真帆 2018年4月23日

#include<stdio.h>
int main(void){
  int n,i,j,max;
  scanf("%d",&n);
  int r[n];
  for(i=0;i<n;i++){
    scanf("%d",&r[i]);
  }
  max=r[1]-r[0];
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      // printf("%d\n",r[j]-r[i]);
      if(max<(r[j]-r[i])){
	max=r[j]-r[i];
	//	printf("%d\n",max);
      }
    }
  }

  printf("%d\n",max);
  return 0;
}

