#include<stdio.h>
int main()
{
  char s[4];
  int i,j,dem[4];
  scanf("%s", &s);
  for (i=0; i<4; i++)
    {
      dem[i]=1;
      for (j=0; j<4; j++)
        {
          if (i!=j)
            {
              if (s[i]==s[j]) dem[i]++;
            }
        }
    }
  if (dem[0]==2 && dem[1]==2 && dem[2]==2 && dem[3]==2) printf("Yes");
   else printf("No");
  return 0;
}
