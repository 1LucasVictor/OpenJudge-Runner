#include<stdio.h>
int main(){
  
  int i,a[3];
  int flag5=0,flag7=0;
  
  for(i=0; i < 3; i++){
  scanf("%d", &a[i]);
    if(a[i] == 5){
      flag5++;
    }else if(a[i] == 7){
      flag7++; 
    }
  }
  
  if(flag5==2 && flag7 == 1){
    printf("YES");
  }else{
    printf("NO");
  }
  
  return 0;
}