#include<stdio.h>
int main(){
  int h;
  int n;
 
  int count = 0;
  int c;
  
  
  scanf("%d%d",&h,&n);
  
  
  
 
  for(int i=0;i<n;i++){
    scanf("%d",&c);
    count+=c;
  }
  
  if(count<h){
      
    printf("No");
  }else{
    printf("Yes");
  }
  
  return 0;
}