#include <stdio.h>

int main(){
  int num1,num2,sum,count;
 while(scanf("%d %d",&num1,&num2)!=EOF){
 sum=num1+num2;
 count=0;
 if(sum>0){
  count++;
  if(sum>9){
   count++;
    if(sum>99){
     count++;
      if(sum>999){
       count++;
        if(sum>9999){
         count++;
          if(sum>99999){
           count++;
            if(sum>999999){
             count++;}
         }
        }
       }
      }
     }
    }
  printf("%d\n",count);
}
 return 0;
}