#include<stdio.h>

int main()
{
	int a,b,q1,q2,q3;
	scanf("%d%d",&a,&b);

	q1=a+b;
	q2=a-b;
	q3=a*b;

	if(q1>q2)
    {
        if(q1>q3) printf("%d",q1);
        else printf("%d",q3);
    }

    if(q2>q1)
    {
        if(q2>q3) printf("%d",q2);
        else printf("%d",q3);
    }

    if(a==0||b==0) printf("0");

    return 0;

}