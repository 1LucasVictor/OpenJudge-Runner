#include<stdio.h>
int main(void)
{
  int x,n,flag=0;
  char box[100];
  scanf("%d",&n);
  for(x=0;x<n;x++)
    scanf("%d",&box[x]);
  for(x=0;x<n;x++){
    if(box[x]%2==0){
      if(box[x]%3==0||box[x]%5)
        flag=1;
    }
  }
  if(flag)
    printf("APPROVED");
  else
    printf("DENIED");
  return 0;
}
