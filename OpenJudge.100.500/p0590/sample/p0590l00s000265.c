#include<stdio.h>

int main(void){

int a[5];
int k;
int i,j;
int judge=1;
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
scanf("%d",&k);

for(i=0;i<5;i++){
  for(j=4;j>=0;j--){
    if(a[j]-a[i]>k){
      judge=0;
      break;
    }
    if(a[j]-a[i]>k){
      break;
  }
}
}
if(judge==0){
  printf(":(\n");
}
else{
  printf("Yay!\n");
}
  return 0;
}
