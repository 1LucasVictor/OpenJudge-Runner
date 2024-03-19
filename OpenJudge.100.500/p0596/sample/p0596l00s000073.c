#include <stdio.h>
#include <string.h>
char a[100002],b;

int main()
{
    int count=0;
    char *p=a,*m=&b;
    scanf("%s",a);

    for(p=a;*p!='\0';p++)
    {
        m = p;
        if((*p=='0'&&*(p+1)=='1' || *p=='1'&&*(p+1)=='0') && p!=a)
        {
            count++;
            while(*p!='\0')
            {
                *p = *(p+2);
                p++;
            }
            p = m-2;
        }
        if((*p=='0'&&*(p+1)=='1' || *p=='1'&&*(p+1)=='0') && p==a)
        {
            count++;
            while(*p!='\0')
            {
                *p = *(p+2);
                p++;
            }
            p = a;
        }
    }

    printf("%d\n",count*2);
    return 0;
}




