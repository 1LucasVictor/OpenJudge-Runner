#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define in scanf
#define out printf
#define lin puts("");
int main()
{
    int n;
    in("%d",&n);
    out("%d",((n/500)*1000+((n%500)/5)*5));
    lin
}
