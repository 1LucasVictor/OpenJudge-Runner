#include<stdio.h>
int main(void){
  int h,a,ans=0,i;
  scanf("%d%d",&h,&a);
 for(i=1;i<10000;i++){
   h-=a; 
   ans++;
    
   if(h<=0){
     
    printf("%d",ans);
     return 0;
   }
 }
 

  return 0;
}