#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int input_sec;
  scanf("%d",&input_sec);

  int hh,mm,ss;
  hh = (int)(input_sec/3600);
  mm = (int)((input_sec-hh*3600)/60);
  ss = input_sec - hh*3600 - mm*60;

  printf("%d:%d:%d\n",hh,mm,ss);

  return EXIT_SUCCESS;
}

