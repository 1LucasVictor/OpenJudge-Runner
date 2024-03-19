#include<stdio.h>
#include<string.h>

int main(void)
{
  int a[200], b[200], ab[200];
  int i=0;
  int count;

  while(scanf("%d", &a[i]) != EOF){
    scanf("%d", &b[i]);
    i++;
  }

  for(count=0; count<i; count++){
    if(a[count]+b[count]>=0 && a[count]+b[count] < 10){
      printf("%d\n",1);
    }else if(a[count]+b[count]>=10 && a[count]+b[count] < 100){
      printf("%d\n",2);
    }else if(a[count]+b[count]>=100 && a[count]+b[count] < 1000){
      printf("%d\n",3);
    }else if(a[count]+b[count]>=1000 && a[count]+b[count] < 10000){
      printf("%d\n",4);
    }else if(a[count]+b[count]>=10000 && a[count]+b[count] < 100000){
      printf("%d\n",5);
    }else if(a[count]+b[count]>=100000 && a[count]+b[count] < 1000000){
      printf("%d\n",6);
    }else if(a[count]+b[count]>=1000000 && a[count]+b[count] < 10000000){
      printf("%d\n",7);
    }
  }
  return 0;
}