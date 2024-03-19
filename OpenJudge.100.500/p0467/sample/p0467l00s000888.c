#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,c,k;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    if(k==a || (k>a&&k<=a+b)){
        printf("%d\n",a);
    }
    else if(k<a){
        printf("%d\n",k);
    }
    else if(a+b+c>k){
        printf("%d\n",(a+b)-c);

    }
    else if(a+b+c==k){
        printf("%d\n",a-c);
    }


    return 0;
}
