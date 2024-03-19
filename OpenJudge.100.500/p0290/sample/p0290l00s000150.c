#include <stdio.h>

#define N 1000

int main()
{
  int i,j,hako[N],n,count = 0,flag;

  scanf("%d",&n);


  for(i = 0;i < n;i ++)
    {
  scanf("%d", &hako[i]);
    }


  for( j = 0 ;j < n;j ++ ){
    flag = 0;
    for(i = 2;i < hako[j];i ++){
      if( hako[j]%i == 0 ) {
        flag = 1;
        break;
      }
    }
    if(flag == 0)count ++;
  }


  printf("%d\n",count);

  return 0;
}