#include <stdio.h>
int main()
{
    int i=0,h,n,a[100];
    scanf("%d %d",&h,&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        h=h-a[i];
    }
    if((h<0) || (h==0))
printf("Yes");
else printf("No");
	return 0;
}