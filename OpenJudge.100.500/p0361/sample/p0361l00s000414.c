#include <stdio.h>

#define HOUR    (3600) //sec
#define MINUTE  (60)   //sec
int main()
{
  int inp_sec;
  int hour,minite;
  scanf("%d",&inp_sec);

  hour = inp_sec / HOUR;
  inp_sec -= hour * HOUR;

  minite = inp_sec / MINUTE;
  inp_sec -= minite * MINUTE;

  printf("%d:%d:%d\n",hour,minite,inp_sec);
  return 0;
}