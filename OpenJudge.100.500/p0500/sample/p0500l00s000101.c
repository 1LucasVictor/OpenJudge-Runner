#include <stdio.h>
int main(void)
{
 int N,M;
 int g = 0;
 int s = 0;
 int b = 0;
 int i,j;
 int tmp1 =0 ;
 int tmp10 =0 ;
 int tmp100 =0 ;

 int A[M];
 int B[M];

 scanf("%d %d\n",&N,&M);
	if (M == 0){
               if (N == 1){
			printf("0");
			return 0;
		}else if(N == 2){
			printf("10");
			return 0;
		}else{
			printf("100");
			return 0; 
		}
	}

 for(i=0;i<M;i++)
  scanf("%d %d\n",&A[i],&B[i]);

 if(N==1)
  {
   for(i=0;i<M;i++)
    if(A[i] == 1) tmp1 = B[i];


  for(i=0;i<M;i++)
   for(j=0;j<M;j++)
    {
     if(A[i]==A[j] && B[i]!=B[j])
       {printf("-1\n");
      goto L_Break;}
    }

  for(i=0;i<M;i++) 
    if(A[i] == 1 && B[i] <= tmp1) tmp1 = B[i];
  printf("%d\n",tmp1);


 }
 else if (N==2)
  {

  for(i=0;i<M;i++)
   for(j=0;j<M;j++)
    {
     if(A[i]==A[j] && B[i]!=B[j])
       {printf("-1\n");
      goto L_Break;}
    }


   for(i=0;i<M;i++)
    {
     if(A[i] == 1) tmp10 = B[i];
     else if(A[i] == 2) tmp1 = B[i];
    }

   for(i=0;i<M;i++)
   {
    if(A[i]==1 && B[i]<=tmp10) tmp10 = B[i];
    else if (A[i] == 2 && B[i] <= tmp1) tmp1 = B[i];
  }
    s = tmp10*10;
    g = tmp1;


   if(s == 0) 
	{printf("-1\n");
      goto L_Break;}
   
  printf("%d\n",s+g);
  }


 else if (N==3)
  {

  for(i=0;i<M;i++)
   for(j=0;j<M;j++)
    {
     if(A[i]==A[j] && B[i]!=B[j])
       {printf("-1\n");
      goto L_Break;}
    }


   for(i=0;i<M;i++)
    {
     if(A[i] == 1) tmp100 = B[i];
     else if(A[i] == 2) tmp10 = B[i];
     else if(A[i] == 3) tmp1 = B[i];
    }

   for(i=0;i<M;i++)
    {
    if(A[i]==1 && B[i]<=tmp100) tmp100 = B[i];
    else if (A[i]==2 && B[i]<=tmp10) tmp10 = B[i];
    else if (A[i]==3 && B[i]<=tmp1) tmp1 = B[i];
   }

    b = tmp100*100;
    s = tmp10*10;
    g = tmp1;



   if(b==0) 
    {printf("-1\n");
      goto L_Break;}

  printf("%d\n",b+s+g);
   }

 L_Break:

 return 0;
}
