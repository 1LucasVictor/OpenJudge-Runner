#include<stdio.h>
int main(){
  int x[6];
  int i,j;
  int n=0;
  
  for(i=0;i<6;i++){
    scanf("%d",&x[i]);
  }
  
  for(j=4;j>0;j--){
    if(x[j]-x[0]>x[5]) n++;
  }
  
  for(j=4;j>1;j--){
    if(x[j]-x[1]>x[5]) n++;
  }
  
  for(j=4;j>2;j--){
    if(x[j]-x[2]>x[5]) n++;
  }
  
  for (j=4;j>3;j--){
    if(x[j]-x[3]>x[5]) n++;
  }
  
  if(n==0) printf("Yay!\n");
  else printf(":(\n");
  return 0;
}
  
  
