#include<stdio.h>
#include<string.h>
int main()
{
  int A,B,C;
  int con5=0,con7=0,con=0;
  
  scanf("%d %d %d",&A,&B,&C);
  
  if(A==5) con5++;
  else if(A==7) con7++;
  else con++;
  if(B==5) con5++;
  else if(B==7) con7++;
  else con++;
  if(C==5) con5++;
  else if(C==7) con7++;
  else con++;
  
  if(con==0&&con5==2&&con7==1)
    printf("YES");
  else printf("NO");
  
  return 0;
}