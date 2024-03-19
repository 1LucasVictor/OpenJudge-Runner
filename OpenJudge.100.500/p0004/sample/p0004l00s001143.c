#include <stdio.h>

int main(void)
{
	int a,b,tmp1,tmp2,tmp3,kouyaku;
	int koubai;
	
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		tmp1=a;
		tmp2=b;
		if(a==0 || b==0)
		{
			kouyaku=0;
			koubai=0;
		}
		else
		{
			while((tmp3=tmp1%tmp2)!=0)
			{
				tmp1=tmp2;
				tmp2=tmp3;
			}	//ループが終わればtmp2が最大公約数
			kouyaku=tmp2;
		
			koubai=a/kouyaku*b;	//a*b/最大公約数ではオーバーフローする
		}
		printf("%d %d\n",kouyaku,koubai);
	}
	return 0;
}