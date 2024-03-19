#include <stdio.h>
 
int ketasu(int num)
{
        int a = 0;
        while(num > 0) {
                num /= 10;
                a++;
        }
        return a;
}
 
int main()
{
        int a,b;
        while(scanf("%d %d",&a,&b) != EOF) {
                printf("%d\n",ketasu(a+b));
        }
        return 0;
}