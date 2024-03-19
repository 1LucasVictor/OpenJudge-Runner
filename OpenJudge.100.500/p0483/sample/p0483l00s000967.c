//#include <bits/stdc++.h>
#include<stdio.h>
//using namespace std;

int main()
{
	int n, flag = 0;
	scanf("%d", &n);
	while (n != 0)
	{
		int x = n % 10;
		if (x == 7)
		{
			flag = 1;
			break;
		}
		n /= 10;
	}
	if (flag == 1) 
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
 
