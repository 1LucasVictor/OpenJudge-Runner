 #include <stdio.h>
int main (void)
{
	int i;
	int a[100];
  	int n;
  
	scanf("%d", &n);
	for (i = 0; i < n; i++)
    {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) 
    {
		if (a[i] % 2 == 0 && a[i] % 3 != 0 && a[i] % 5 != 0)
        {
			puts("DENIED");
			return 0;
		}
	}
	puts("APPROVED");
	return 0;
}