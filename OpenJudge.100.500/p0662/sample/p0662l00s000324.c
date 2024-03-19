#include <stdio.h>


int main()
{
    int a, b, c, d;
    int ans;

    int division_right;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a <= c)
    {
	// cが区間の左端？
	// a---b  c---d
	
	// 区間は重なっている？
	if (b < c)
	{
	    ans = 0;
	}
	else
	{
	    if (b <= d)      // a---c--b---d
	    {
		division_right = b;
	    }
	    else             // a---c--d---b
	    {
		division_right = d;
	    }
	    ans = division_right - c;
	}
    }
    else
    {
	// aが区間の左端？
	// c-----d a-----b

	// 区間は重なっている？
	if (d < a)
	{
	    ans = 0;
	}
	else
	{
	    if (d <= b)     // c---a--d--b
	    {
		division_right = d;
	    }
	    else            // c---a--b---d
	    {
		division_right = b;
	    }
	    ans = division_right - a;
	}
    }

    printf("%d\n", ans);

    return 0;
}
