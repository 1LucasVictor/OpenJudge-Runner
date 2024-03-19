#include<stdio.h>

int main(void)
{
  int n[3];
  int count_5=0,count_7=0;

  scanf("%d %d %d",&n[0],&n[1],&n[2]);
  for(int i=0;i<3;i++){
    if(n[i]==7){
      count_7++;
    }else if(n[i]==5){
      count_5++;
    }
  }

  if(count_5==2&&count_7==1){
    puts("YES");
  }else{
    puts("NO");
  }
  return 0;
}
