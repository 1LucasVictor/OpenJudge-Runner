#include <stdio.h>
#define N 8

int X[N][N]={0};

int calc(int);
int Search(int ,int);
void Print();

int main(){
	int a,b,c = 0;
	int n,i,j;

	scanf("%d",&n);
	for(i=0;i < n;i++)
	{
		scanf("%d %d",&b,&a);
		X[b][a] = 1;
	}
	i = calc(c);
	return 0;
}

int Search(int b,int a){
	int i,j;

	for(i=0 ; i < N ; i++)
	{
		if(i!=a && X[b][i] == 1)return 0;
	}
	for(i=0 ; i < N ; i++)
	{
		if(i!=b && X[i][a] == 1)return 0;
	}
	i=b-1; j=a+1;
	while(i >=0 && j < N)
	{
		if(X[i--][j++] == 1)return 0;
	}
	i=b-1; j=a-1;
	while(i >=0 && j >=0)
	{
		if(X[i--][j--] == 1)return 0;
	}
	i=b+1; j=a-1;
	while(i < N && j >=0)
	{
		if(X[i++][j--] == 1)return 0;
	}
	i=b+1; j=a+1;
	while(i < N && j < N)
	{
		if(X[i++][j++] == 1)return 0;
	}
	return 1;
}

int calc(int c){
	int i;
	for(i=0 ; i < N ; i++)
	{
		if(X[c][i] == 1)
		{
			if(!calc(c+1))return 0;
		}
	}
	if(c == N)
	{
		Print();
		return 1;
	}

	else
	{
		for(i=0 ; i < N ; i++)
		{
			if(X[c][i] == 0 && Search(c,i))
			{
				X[c][i]=1;
				if(!calc(c+1))
				{
					X[c][i]=0;
				}
			}
		}
	}
	return 0;
}

void Print()
{
	int i,j;
	for(i=0 ; i < N ; i++)
	{
		for(j=0 ; j < N ; j++)
		{
			if(X[i][j] == 1)
			{
				printf("Q");
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
	}
	return;
}

