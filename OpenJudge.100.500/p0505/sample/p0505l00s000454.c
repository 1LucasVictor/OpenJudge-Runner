#include<stdio.h>

int main(){
   int h,n;
   scanf("%d %d",&h,&n);
   int a[n];
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
      h=h-a[i];
   }
   if(h<=0){
      printf("Yes\n");
   }else{
      printf("No\n");
   }
   return 0;
}
