#include<stdio.h>

int main()
{
 int A, B, C, D;
 int ans=0;;

 scanf("%d %d %d %d",&A,&B,&C,&D);
 if((B>=C)&(D>=B)) ans = (B-C);
 if((B>=C)&(D<=B)) ans = (D-C);
 if((A>=C)&(B<=D)) ans = (B-A);
 if((A>=C)&(D<=B)) ans = (D-A);
 printf("%d\n",ans);

 return 0;
}
