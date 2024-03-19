#include<stdio.h>
int main(){
  int h,w;
  char s;
  s ='#';
  // while (1)
  // {
  //   scanf("%d",&h);
  //   scanf("%d",&w);
  //   if(w == 0 && h == 0 )break;
  //   for (int i = 0; i < h; i++)
  //   {
  //     for (int j = 0; j < w; j++)
  //     {
  //       printf("#");
  //     }
  //     printf("\n");
  //   }
  //   printf("\n");
  // }
  ///////////////////////////////////////////////////////////
    while (1)
  {
    scanf("%d",&h);
    scanf("%d",&w);
    if(w == 0 && h == 0 )break;
    for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
      {
        if(j == 0 || j == w-1 || i == 0 || i == h-1 ) s = '#';
        else
        {
          s = '.';
        }
        
        printf("%c",s);
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
