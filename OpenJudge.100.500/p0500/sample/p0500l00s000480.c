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
  {
  scanf("%d %d\n",&A[i],&B[i]);
  if((A[i] > N)||(A[i]==1&&B[i]==0&&N>=2))
    {
      printf("-1\n");
      return 0;
    }
  }

  for(i=0;i<M;i++)
   for(j=0;j<M;j++)
    {
     if(A[i]==A[j] && B[i]!=B[j])
       {printf("-1\n");
      goto L_Break;}
    }


 if(N==1)
  {
   for(i=0;i<M;i++)
    if(A[i] == 1) tmp1 = B[i];

  for(i=0;i<M;i++) 
    if(A[i] == 1 && B[i] <= tmp1) tmp1 = B[i];
  if(tmp1 != 0 )  printf("%d\n",tmp1);
  else printf("0\n");
 }
 else if (N==2)
  {
    int xx=1,x=0;

   for(i=0;i<M;i++)
    {
     if(A[i] == 1) xx = B[i];
     else if(A[i] == 2) x = B[i];
    }
   printf("%d%d\n",xx,x);

   }

 else if (N==3)
  {
  int xxx=1,xx=0,x=0;

   for(i=0;i<M;i++)
    {
     if(A[i] == 1) xxx = B[i];
     else if(A[i] == 2) xx = B[i];
     else if(A[i] == 3) x = B[i];
    }
  printf("%d%d%d\n",xxx,xx,x);
   }

 L_Break:

 return 0;
}
