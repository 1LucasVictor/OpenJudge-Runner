#include<stdio.h>
#include<string.h>

int mp[10][10],book[10][10],n,flag,a[10];

int check(int x,int y)
{
	for(int i=0;i<8;i++)//左右
	{
		if(book[x][i]==1) return 0;
	}
	for(int i=0;i<8;i++)//上下
	{
		if(book[i][y]==1) return 0;
	}
	for(int i=x,j=y;i>=0&&j>=0;i--,j--)//左上
	{
		if(book[i][j]==1) return 0;
	}
	for(int i=x,j=y;i<8&&j<8;i++,j++)//右下
	{
		if(book[i][j]==1) return 0;
	}
	for(int i=x,j=y;i<8&&j>=0;i++,j--)//左下
	{
		if(book[i][j]==1) return 0;
	}
	for(int i=x,j=y;i>=0&&j<8;i--,j++)//右上
	{
		if(book[i][j]==1) return 0;
	}
	return 1;
}

void dfs(int x,int cnt)
{
	if(cnt>=8-n)
	{
		flag=1;
		return;
	}
	if(x>8) return;
	for(int i=0;i<8;i++)
	{
		if(a[x]==1)
		{
			dfs(x+1,cnt);
			if(flag) return;
		}

		if(book[x][i]==0&&check(x,i)==1)
		{
			book[x][i]=1;
			mp[x][i]=1;
			dfs(x+1,cnt+1);
			if(flag) return;
			book[x][i]=0;
			mp[x][i]=0;
		}
	}

}

int main()
{
	while(~scanf("%d",&n))
	{
		memset(mp,0,sizeof(mp));
		memset(book,0,sizeof(book));
		memset(a,0,sizeof(a));
		flag=0;
		int x,y;
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&x,&y);
			a[x]=1;
			mp[x][y]=1;
			book[x][y]=1;
		}

		dfs(0,0);

		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(mp[i][j]==0) printf(".");
				else printf("Q");
			}
			printf("\n");
		}
	}
	return 0;
}

