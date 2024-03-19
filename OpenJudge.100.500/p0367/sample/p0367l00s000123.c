#include <stdio.h>
int main(void)
{
	int a,b,c,d,cnt=0;
	scanf("%d%d%d",&a,&b,&c);
	for (d=a;d<=b;d++){
		if(c%d==0){
			cnt++;
		}
	}
	printf("%d\n",cnt);
	
	return 0;
}
