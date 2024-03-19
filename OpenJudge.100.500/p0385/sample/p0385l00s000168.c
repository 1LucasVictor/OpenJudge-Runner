
#include <stdio.h> 
int main(void)
{

 int num,a;
 while(1){
 int sum = 0;
 scanf("%d", &num);
 if(num==0)break;
 int count=0;
 while(num>0){
   a = num % 10;
   sum = sum + a;
   num = num / 10;
   count++;
 }
if(count<1000)
 printf("%d\n", sum);
 else
 printf("");
   }
 return 0;
}
