#include<stdio.h>

int main(void)
{
  int n;
  int i;
  int num[100];

  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d", &num[i]);
  }
  for(i=0;i<n;i++){
    if((num[i]%2==0) && (num[i]%3!=0) && (num[i]%5!=0)){
        puts("DENIED");
      return 0;
      }
  }
    puts("APPROVED");
    
    return 0;
}
    
  
  
