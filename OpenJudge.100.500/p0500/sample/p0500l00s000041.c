#include <stdio.h>
int main(void)
{
 int N,M;
 int g = 0;
 int s = 0;
 int b = 0;
 int i,j;
 int A[M];
 int B[M];

 scanf("%d %d\n",&N,&M);
 for(i=0;i<M;i++)
  scanf("%d %d\n",&A[i],&B[i]);

 if(N==1)
  {
   for(i=0;i<M-1;i++)
    for(j=i+1;j<M;j++)
    {
      if(B[i] != B[j] && A[i] == A[j]) 
      {printf("-1\n");
      goto L_Break;}
    }
   printf("%d\n",B[j]);
  }
 else if (N==2)
  {
   for(i=0;i<M-1;i++)
    for(j=i+1;j<M;j++)
    {
      if(B[i] != B[j] && A[i] == A[j]) 
      {printf("-1\n");
      goto L_Break;}
    }
  for(i=0;i<M;i++)
   {
   if(A[i] == 1) s = B[i]*10;
   else if(A[i] == 2) g = B[i];
   if(s == 0) 
	{printf("-1\n");
      goto L_Break;}
   }
  printf("%d\n",s+g);
  }
 else if (N==3)
  {
   for(i=0;i<M-1;i++)
    for(j=i+1;j<M;j++)
    {
      if(B[i] != B[j] && A[i] == A[j]) 
      {printf("-1\n");
      goto L_Break;}
    }
  for(i=0;i<M;i++)
   {
   if(A[i] == 1) b = B[i]*100;
   else if(A[i] == 2) s = B[i]*10;
   else if(A[i] == 3) g = B[i];

   if(b==0) 
    {printf("-1\n");
      goto L_Break;}

   }
  printf("%d\n",b+s+g);
   }



 L_Break:

 return 0;
}
