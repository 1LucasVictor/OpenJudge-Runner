// AOJ ALDS1_5_B Merge Sort
// 2018.4.30 bal4u

#include <stdio.h>
#include <string.h>

#if 1
#define gc() getchar_unlocked()
#define pc(c) putchar_unlocked(c)
#else
#define gc() getchar()
#define pc(c) putchar(c)
#endif

int in()
{
	int n = 0, c = gc();
	do n = 10*n + (c & 0xf), c = gc(); while (c >= '0');
	return n;
}

char buf[20];
void mypr(int n)
{
	int w;
	if (!n) { pc('0'); return; }
	w = 0; while (n) buf[w++] = n%10 + '0', n/=10;
	while (w--) pc(buf[w]);
}

#define MAX_N 500002
int *a;
int w[MAX_N/2+2];
int cnt;

void merge(int low, int high) 
{ 
   int i, j, k, p, mid; 

   if (low < high) {
	   mid = (low + high) >> 1;
	   merge(low, mid);
	   merge(mid+1, high);

	   p = mid-low+1, cnt += high-low+1;
	   memcpy(w, a+low, p << 2);
	   i = mid+1, j = 0; k = low;
	   while (i <= high && j < p) {
		   if (w[j] <= a[i]) a[k++] = w[j++];
		   else              a[k++] = a[i++];
	   }
	   memcpy(a+k, w+j, (p-j) << 2);
   }
}

void merge_sort(int n, int *aa)
{
	a = aa;
	merge(0, n-1);
}

int aa[MAX_N];

int main()
{
	int n, i;
	
	n = in();
	for (i = 0; i < n; i++) aa[i] = in();

	cnt = 0;
	merge_sort(n, aa);
	mypr(a[0]); for (i = 1; i < n; i++) pc(' '), mypr(a[i]); pc('\n');
	mypr(cnt); pc('\n');
	return 0;
}
