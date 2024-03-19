#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(char *)a - *(char *)b;
}
int main(void)
{
	char ch[4];
	scanf("%s",ch);
	int i;
	int flag = 1;
	qsort(ch,4,sizeof(ch[0]),cmp);
	for(i = 0;i<4;i+=2)
	{
		if(ch[i] != ch[i+1])
		{
				flag = 0;
				break;
		}
	}
	if(ch[0] == ch[2])
	{
			flag = 0;
	}
	printf(flag == 1?"Yes":"No");
	return 0;
}