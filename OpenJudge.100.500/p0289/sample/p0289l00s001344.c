#include<stdio.h>

int main()
{
	int x,y;
	int z;
	int amari;
	int ans;
	int c=0;


	scanf("%d",&x);
	scanf("%d",&y);

	if(x<=y)
	{
		z=x;
		x=y;
		y=z;
	}

	amari=x%y;
    while(c<=y)
    {
    	c++;
	        if(amari%c==0 && y%c==0)
	        {
	        	ans=c;
	        }

    }

printf("%d\n",ans);

}
