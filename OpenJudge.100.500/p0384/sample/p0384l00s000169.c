#include<stdio.h>

int main()
{
  char text[1200];
  int i = 0;
  scanf("%[^\n]s", text);

  while(text[i] != NULL)
    {
      if(text[i] >= 65 && text[i] <= 90)
	{
	  printf("%c", (text[i]+32));
	  i++;
	  continue;
	}
      if(text[i] >= 97 && text[i] <= 122)
	{
	  printf("%c", (text[i]-32));
	  i++;
	  continue;
	}
      printf("%c", text[i]);
      i++;
    }
  printf("\n");
}


