#include<stdio.h>
int main(){
  int h;
  int n;
  int a[50];
  int count = 0;
  
  
  scanf("%d",&h);
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d,",&a[i]);
  }
  
 
  for(int i=0;i<n;i++){
    count+=a[i];
  }
  
  if(count<h){
      
    printf("No");
  }else{
    printf("Yes");
  }
  
  return 0;
}