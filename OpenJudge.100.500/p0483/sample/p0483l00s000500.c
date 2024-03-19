#include <stdio.h>

int main()
{
  int n,ge,shi,bai;
  scanf("%d",&n);
  
  bai=n/100;
  shi=(n-bai*100)/10;
  ge =n-bai*100-shi*10;
  
  if(bai==7){
    printf("Yes");
    return 0;
  }
  if(shi==7){
    printf("Yes");
    return 0;
  }
  if(ge==7){
    printf("Yes");
    return 0;
  }
  if(bai!=7&&shi!=7&&ge!=7){
    printf("No");
    return 0;
  }
}