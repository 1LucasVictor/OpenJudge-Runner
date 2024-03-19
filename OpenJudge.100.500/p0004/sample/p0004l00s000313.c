#include <stdio.h>
main()
{
    int a, b, r, temp,i,c,d,e,f,j;

    while(scanf("%d %d",&a,&b)!=EOF){
	c=a;
	d=b;
        if(a<b){
			 temp = a; a = b; b = temp;
			 }
        while( (r = a % b) != 0 ) {
            a = b;
            b = r;
        }
	e=c/b;
	f=d/b;
	j=b*e*f;
	printf("%d %d\n",b,j);

    }

return 0;
}