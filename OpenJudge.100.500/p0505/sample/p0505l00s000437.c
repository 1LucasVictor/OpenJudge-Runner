#include<stdio.h>

int main(void){
   int h,n,i;
   scanf("%d %d",&h,&n);
   int a[n];
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      h-=a[i];
   }
   if(h<=0){
      printf("Yes\n");
   } else {
      printf("No\n");
   }
   return 0;
}
