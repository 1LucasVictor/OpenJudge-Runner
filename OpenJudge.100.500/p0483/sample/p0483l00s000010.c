#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<100||n>999)   return 0;
	else
    {
        int a=n/100;
	    int b=(n-a*100)/10;
	    int c=n-a*100-b*10;
	    if(a==7||b==7||c==7)  printf("Yes");
	    if(a!=7&&b!=7&&c!=7) printf("No");
	}
    return 0;
}


