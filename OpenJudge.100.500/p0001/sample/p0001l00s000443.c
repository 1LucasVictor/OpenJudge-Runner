/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0002&lang=jp
*/


#include <stdio.h>
int main(void)
{
    int i=0,n=3,sum,len=0;
    int a,b;
    char c[10];

//    scanf("%d %d",&a,&b);

    while(scanf("%d %d",&a,&b)!=EOF){   
        sum=a+b;
        
        while(sum!=0){
            sum=sum/10;
            ++len;
        }
        printf("%d\n",len);
 //       scanf("%d %d",&a,&b);
        len=0;
    }

    return 0;

}
