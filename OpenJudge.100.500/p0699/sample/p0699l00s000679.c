#include<stdio.h>
int main(){
  int a[3];
  int i;
  for(i=0;i<3;i++){
    scanf("%d",&a[i]);
    if(a[i]==5){
      a[i]=0;
    }else if(a[i]==7){
      a[i]=1;
    }
  }
  if(a[0]+a[1]+a[2]==1){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  return(0);
}
