#include <stdio.h>
int main(){
int a[3];
  scanf("%d %d %d",&a[0],&a[1],&a[2]);
  int five=0,sevne=0;
  int i;
    for(i=0;i<3;i++){
    if(a[i]==5){
    five++;
    }else if(a[i]==7){
    sevne++;}
    }
  if(five==2 && sevne==1){
  
  printf("YES\n");
  }else{
  printf("NO\n");
  }
  return(0);
}
