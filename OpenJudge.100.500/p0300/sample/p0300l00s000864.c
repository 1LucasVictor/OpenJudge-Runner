#include<stdio.h>

int main(void) {

  int i,j,n1,n2,num1[100],num2[100],cnt = 0;

 scanf("%d",&n1);
 for(i=0;i<n1;i++)
   scanf("%d",&num1[i]);
 
 scanf("%d",&n2);
 for(j=0;j<n2;j++)
   scanf("%d",&num2[j]);

 for(i=0;i<n1;i++) {
   for(j=0;j<n2;j++) {
     if(num1[i] == num2[j]) {
       cnt++;
     }
   }
 }
 
 printf("%d",cnt);
 return 0;
}