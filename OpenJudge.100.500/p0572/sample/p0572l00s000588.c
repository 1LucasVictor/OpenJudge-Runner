//#include "pch.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"



int main()
{
	int L, R;
	scanf("%d %d", &L, &R);

	L = L % 2019;
	R = R % 2019;
	if (L > R)
	{
		int tmp = L;
		L = R;
		R = tmp;
	}

	int nMod = (L * (L + 1)) % 2019;
	for (int i = L; i < R - 1; i++)
	{
		for (int j = i + 1; j < R; j++)
		if (nMod > (i * j) % 2019)
			nMod = (i * j) % 2019;
	}

	printf("%d", nMod);

	return 0;
}