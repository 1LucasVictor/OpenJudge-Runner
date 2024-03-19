#include<stdio.h>

void numChange(int num[]);

int main(void)
{
  int num[3];
    
  for(int i=0;i<3;i++){
    scanf("%d",&num[i]);
  }
    
  numChange(num);
    
  for(int i=0;i<2;i++){
    printf("%d ",num[i]);
  }
  printf("%d\n",num[2]);
}

void numChange(int num[])
{
  int tmp;
  int min;
    
  for(int i=0;i<3;i++){
    min=i;
    for(int j=i+1;j<3;j++){
      if(num[min]>num[j])
	min=j;
    }
    tmp=num[i];
    num[i]=num[min];
    num[min]=tmp;
  }
}

