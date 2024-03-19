#include<stdio.h>
int main()
{
  int K,A,B,i;
  scanf("%d %d %d",&K,&A,&B);
  for(i=A;i<=B&&i>=K;i++){
    if(i%K==0){
      printf("OK");break;}
  }
  if(i%K!=0){
    printf("NG");}
  else if(K>i){
    printf("NG");}
  return 0;
}
    