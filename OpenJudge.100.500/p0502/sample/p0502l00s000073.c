#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int map[101];
int n;
int main(void)
{
	scanf("%d",&n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &map[i]);
	}
	int flag = 0;
	int cnt = 0;
	int cnt2 = 0;
	for (int i = 0; i<n; i++)
	{
		
		if (map[i] % 2 == 0)
		{
			cnt++;
			//printf("%d\n",map[i]);
			if (map[i] % 3 == 0 || map[i] % 5 == 0)
			{
				cnt2++;
				//printf("%d %d",cnt,cnt2);
				//printf("%d\n", map[i]);
				flag = 1;
			}
		}
	}
	if (flag == 1 &&  cnt == cnt2) printf("APPROVED");
	else printf("DENIED");
	return 0;
}
