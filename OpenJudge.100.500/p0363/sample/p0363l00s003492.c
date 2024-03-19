#include<stdio.h>
int main(){
  int a[3];
  int i,j,min;

  for(i=0;i<3;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<3;i++){
    for(j=i+1;j<3;j++){
      if(1<=a[i] && a[i]<=10000){
        if(a[i]>a[j]){
          min=a[i];
          a[i]=a[j];
          a[j]=min;
        }
      }
    }
  }
 
   printf("%d ",a[0]);
printf("%d " ,a[1]);
printf("%d\n", a[2]);
 
  return 0;
}