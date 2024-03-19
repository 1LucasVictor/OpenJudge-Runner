#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
typedef long long int lli;
void merge (long long int arr[], long long int l, long long int m, long long int r)
{
	long long int i, j, k, n1 = m - l + 1, n2 =  r - m, L[n1], R[n2];
	for (i = 0; i < n1; i++) L[i] = arr[l + i]; for (j = 0; j < n2; j++) R[j] = arr[m + 1+ j];
	i = 0;j = 0;k = l;
	while (i < n1 && j < n2)
	{if (L[i] <= R[j]) arr[k++] = L[i++]; else arr[k++] = R[j++];}
	while (i < n1) arr[k++] = L[i++]; while (j < n2) arr[k++] = R[j++];
}
void mergesort (long long int arr[], long long int l, long long int r)
{
	if (l < r)
	{
		long long int m = l+(r-l)/2;
		mergesort(arr, l, m);
		mergesort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}
int cmp (const void *a, const void *b)
{
	return *(long long int *)a - *(long long int *)b;
}

//qsort(arr,n,sizeof(long long int),cmp);
//mergesort(arr, 0, arr_size - 1);

int main ()
{
	long long int n,a,b,c,d,l1,l2,r1,r2,flag=0,lol=0 ;
	char str[210000] ;

	scanf("%lld %lld %lld %lld %lld", &n, &a, &b, &c, &d);
	scanf("%s", str);

	if (a<b)
	{
		l1=a;
		l2=c;
		r1=b;
		r2=d;
	}

	else
	{
		l1=b;
		l2=d;
		r1=a;
		r2=c;
	}

	if (r2<l2)
	{
		lol=5;
	}


	if (lol==5)
	{
		flag=1;

		for (int i=r1-1 ; i<r2 ; i++)
		{
			if (str[i-1]=='.' && str[i]=='.' && str[i+1]=='.')
				flag=0;
		}
	}

	for (int i=l1-1 ; i<l2-1 ; i++)
	{
		if (str[i]=='#' && str[i+1]=='#')
			flag++;
	}

	for (int i=r1-1 ; i<r2-1 ; i++)
	{
		if (str[i]=='#' && str[i+1]=='#')
			flag++;			
	}

	if (flag)
		printf("No\n");

	else
		printf("Yes\n");


	return 0;
}
