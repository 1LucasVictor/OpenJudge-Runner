#include<stdio.h>
int main()
{
  int a[101],c,d,i;
  scanf("%d",&c);
  for(i=0;i<c;i++){
    scanf("%d",&a[i]);}
  d=c-1;
  for(i=d;i>=0;i--){
    if(i==d){
    printf("%d",a[i]);}
    else{
    printf(" %d",a[i]);}
  }
  printf("\n");
  return 0;
}
