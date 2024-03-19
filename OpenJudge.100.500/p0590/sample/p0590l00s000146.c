#include <stdio.h>
#include <sysexits.h>
#include <math.h>
int main(void){
  int x[6],t,i,j;
  if(scanf("%d",&x[0])!=1){
exit(1);
}
  if(scanf("%d",&x[1])!=1){
exit(1);
}
  if(scanf("%d",&x[2])!=1){
exit(1);
}
  if(scanf("%d",&x[3])!=1){
exit(1);
}
  if(scanf("%d",&x[4])!=1){
exit(1);
}
  if(scanf("%d",&x[5])!=1){
exit(1);
}
  /*
  for(i=0;i<4;i++){
    for(j=i+1;j<4;j++){
      if(t>fabs(x[i]-x[j])){
        t=x[i]-x[j];
        }
  }
  }
  */
  if(x[5]>=x[4]-x[0]){
    printf("Yay!");
  }
  else{
    printf(":(");
  }
  return 0;
}

