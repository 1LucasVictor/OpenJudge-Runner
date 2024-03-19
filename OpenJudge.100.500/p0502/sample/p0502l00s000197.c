#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i,a;
  for (i=0;i<n;i++){
    scanf("%d",&a);
      if(a%2==0){
        if(a%3!=0&&a%5!=0){
          puts("DENIED");
          return 0;
        }
      }
  }
  puts("APPROVED");
  return 0;
}