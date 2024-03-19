#include<stdio.h>

int main(void)
{
  int n,i;
  int number[100];
  int check = 0;
  
  scanf("%d",&n);
  for(i = 0;i < n;i++)
    scanf("%d",&number[i]);
  
  for(i = 0;i < n;i++){
    if(number[i] % 2 == 0){
      if(number[i] % 3 != 0 && number[i] % 5 != 0){
        check++;
        break;
      }
    }
  }
  
  if(check == 0)
    printf("APPROVED");
  else
    printf("DENIED");
  
  return 0;
}