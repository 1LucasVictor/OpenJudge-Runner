#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  int i = 1;
  c = 0;
  //a:差し込み口の数/タップ
  //b:欲しい差込口の総数
  //c:差込口の数
  //i:タップの数
  //具体的に想像すると4口/タップだとして
  //4:1,7:2,10:3,13:4,,,
  //2タップ目以降差込口-1で増えていく
  if (a >= b)
  {
    printf("1\n");
  }
  else
  {
    while (a < b)
    {
      a += i*(a-1);
      i++;
    }
    printf("%d\n",i); 
  }
}