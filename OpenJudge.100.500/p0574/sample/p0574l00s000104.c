#include <stdio.h>
 
int main()
{
  char pass[10];
  int bad = 0;
  scanf("%s", pass);
  for (int i =0;i<3;i++)
  {
   if (pass[i] == pass[i+1])
       {
         bad = 1;
         break;
       }
  }
       if (bad) printf("Bad\n");
       else printf("Good\n");
       return 0;
}