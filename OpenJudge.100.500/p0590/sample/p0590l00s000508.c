#include<stdio.h>

int main(void)
{
	int a[5],k,q,r,hantei=0,i,j;
	scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&k);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			r = a[i] - a[j];
			if(r<=-1) r = r * -1;
			if(r > k) hantei = 1;
		}
		r = 0;
	}

	if(hantei==0) printf("Yay!\n");
	else printf(":(\n");
	return 0;
}