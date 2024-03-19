#include<stdio.h>

int main(){
  int suji;
  char moji;

  while(1)
    { 
      scanf("%c",&moji);
      
      if(moji == '.')
	{
	  printf(".");
	  break;
	}
      if(moji == ' ')
	{
	  printf(" ");
	  continue;
	}
      if(moji == ',')
	{
	  printf(",");
	  continue;
	}
      
      suji = (int)moji;
      if(suji >= 97)
	{
	  suji -= 32;
	}
      else
	{
	  suji += 32;
	}
      moji = (char)suji;
      printf("%c",moji);
    }
  printf("\n");
}

