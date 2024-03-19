#include<stdio.h>

int main(void){
  int i,j,a[5],k,flag=0;
  for(i=0;i<5;i++){
    scanf("%d\n",&a[i]);
  }
  scanf("%d",&k);

  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      if((a[i]-a[j]<-k)||(a[i]-a[j])>k)
        flag=1;
    }
  }

  if(flag==1)
    printf(":(\n");
  else
    printf("Yay!\n");

  return 0;
}
