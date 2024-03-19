#include<stdio.h>
//#include<string.h>
int main()
{
  char s[4];
  int i,j,check[4],dem=0;
  scanf("%s", &s);
  check[0]=0;
  check[1]=0;
  check[2]=0;
  check[3]=0;
  for (i=0; i<=3; i++)
    {
      if (check[i]==0) 
        {
          dem++;
          check[i]=1;
        }
	     for (j=i+1; j<4; j++)
          {
            if (s[j]==s[i] && check[j]==0) check[j]=1;
          }
    }
      //printf("%d\n", dem);
      if (dem!=2) printf("No");
      else
        {
          int f1=1;
          for (i=1; i<4; i++)
            {
              if (s[i]==s[0]) f1++;
            }
            //printf("%d", f1);
          if (f1==2) printf("Yes");
           else printf("No");
        }
  return 0;
}