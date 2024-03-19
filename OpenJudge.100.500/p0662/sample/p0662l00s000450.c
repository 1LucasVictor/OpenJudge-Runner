#include<stdio.h>
main()
{
	int A, B, C, D, i, s;
	int a[110];
    while(scanf("%d%d%d%d",&A,&B,&C,&D)!=EOF)
    {
    	s=0;
    	for(i=0;i<110;i++)
    	a[i]=0;
    	for(i=0;i<110;i++)
    	{
    	if(i>=A&&i<B)
    	a[i]++;
    	if(i>=C&&i<D)
    	a[i]++;	
        }
    	for(i=0;i<110;i++)
    	{
    	if(a[i]==2)
    	s++;
        }
    	printf("%d\n",s);
					
	}
}