#include<stdio.h>

int main(){

int count_1=0,count_0=0;
int ans=0;
int buff;
while ((buff=getchar()) != EOF)
{
  if (buff=='0'){
    count_0++;
  }else if (buff=='1')
  {
    count_1++;
  }
}

if (count_1>0&&count_0>0)
{
  if (count_1>=count_0)
  {
    ans += count_0;
  }else
  {
    ans += count_1;
  }
}

printf("%d",ans*2);

return 0;

}