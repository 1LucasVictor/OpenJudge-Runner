#include <stdio.h>

int main()
{
 int i,a[100],n,flag=0;
  
  scanf("%d", &n);
  
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
    if(a[i]%2==0){
      if(a[i]%3!=0&&a[i]%5!=0)
      flag = 1;
    }
  }
  
  if(flag==0)
    printf("APPROVED");
  else
    printf("DENIED");
  
  return 0;
}