#include <stdio.h>

int main(){
  int i,j,temp,a[3];
  for(i=0;i<3;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<3;i++){
    for(j=i+1;j<3;j++){
      if(a[j]<a[i]){
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
      }
    }
  }
  printf("%d %d %d\n",a[0],a[1],a[2]);
  return 0;
}