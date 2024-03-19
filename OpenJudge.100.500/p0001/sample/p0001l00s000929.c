#include<stdio.h>
#include<math.h>

int main(void){
  int a[3],b[3],i,j;
  for(i=0;i<3;i++){
    scanf("%d",&a[i]);
    scanf("%d", &b[i]);
  }
  for(j=0;j<3;j++){
    for(i=6;i>=0;i--){
      if((a[j]+b[j])/pow(10,i)>=1){
	printf("%d\n",i+1);
	break;
      }
    }
  }
  return 0;
}