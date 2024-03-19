#include<stdio.h>
main()
{
	int A,B,C,D,a,b;
	scanf("%d %d %d %d",&A,&B,&C,&D);
	if(A<D&&C<B)
	{
	if(A<C)
	a=C;
	else
	a=A;
	if(B<D)
	b=B;
	else
	b=D;
	printf("%d\n",b-a);
   }
  else
  printf("0\n");
	return 0;
}