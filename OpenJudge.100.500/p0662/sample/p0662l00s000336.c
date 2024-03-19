#include<stdio.h>

int main()
{
 int A, B, C, D;
 int ans=0;;

 scanf("%d %d %d %d",&A,&B,&C,&D);
 if((B>=C)&(D>=B)&(A<=C)) ans = (B-C);
 if((B>=C)&(D<=B)&(A<=C)) ans = (D-C);
 if((A>=C)&(B<=D)&(A<=D)) ans = (B-A);
 if((A>=C)&(D<=B)&(A<=D)) ans = (D-A);
 printf("%d\n",ans);

 return 0;
}