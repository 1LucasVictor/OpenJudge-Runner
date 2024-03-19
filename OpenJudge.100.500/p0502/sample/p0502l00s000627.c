#include <stdio.h>
int main(void)
{
  int s[100];
  int n,i;
  int a=0;
  scanf("%d",&n);
 for(i=0;i<n;i++){
   scanf("%d",&s[i]);
    if((s[i]%2==0)&&(s[i]%3!=0)&&(s[i]%5!=0)){
     a++;
   }
 }  
  
  if(a==0){
    printf("APPROVED");
    }
    else{
      printf("DENIED");
    }
     return 0;
}