/*
  シャッフル( １つのアルファベットが描かれた n 枚のカードの山をシャッフルします。
  1回のシャッフルでは、下から h 枚のカードをまとめて取り出し、
  それを残ったカードの山の上に積み上げます。
  )
  2018/03/04
*/

#include<stdio.h>

int main(void)
{
  char str[201];
  char word;/*str[0]を一時的に保持*/
  int m;/*シャッフル回数*/
  int h;
  int i,j,k;
  
  
  while(1){
    scanf("%s",str);
    if(str[0] == '-')
      break;
    scanf("%d",&m);
    for(i=0;i<m;i++){
      scanf("%d",&h);
      for(j=0;j<h;j++){
	word = str[0];
	k=0;
	while(str[k+1] !='\0'){
	  str[k] = str[k+1];
	  k++;
	}
	str[k] = word;
      }
    }
    printf("%s\n",str);
  }
  return 0;
}
