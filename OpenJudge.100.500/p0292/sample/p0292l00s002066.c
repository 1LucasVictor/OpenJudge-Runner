#include<stdio.h>
int main()
{
  int num[100];
  int flag=1,tmp,count=0;
  int N,i,j;
  scanf("%d",&N);
  for(i=0;i<N;i++)scanf("%d",&num[i]);
  while(flag){
      flag=0;
    for(j=N-1;j>0;j--){
          if(num[j]<num[j-1]){
        tmp=num[j];
        num[j]=num[j-1];
        num[j-1]=tmp;
        flag=1;
        count++;
      }
        }
    }
    for(i=0;i<N;i++){
    printf("%-2d",num[i]);
  }
  printf("\n");
  printf("%d\n",count);
  return 0;
}