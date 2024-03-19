#include <stdio.h>
#define S(A,B) if(B<A){A^=B;B^=A;A^=B;}
a,b,c;main(){scanf("%d%d%d",&a,&b,&c);S(b,c);S(a,c);S(a,b);printf("%d %d %d\n",a,b,c);}