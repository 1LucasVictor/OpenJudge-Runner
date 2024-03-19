#include<stdio.h>
int main(){
  int a[6];
  for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
  }
  int h;//judge
  for(int j=0;j<5;j++){
    for(int k=0;k<5;k++){
      h=a[k]-a[j];
      if(h>a[5]){
        printf(":(\n");
        return 0;
      }
    }
  }
  printf("Yay!\n");
}