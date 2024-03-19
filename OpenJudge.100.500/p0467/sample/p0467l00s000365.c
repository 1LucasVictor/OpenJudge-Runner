#include<stdio.h>

#include<math.h>
int main()
{
    int a,b,c,k,i,j;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    if(k>a&&k<=a+b){
        printf("%d\n",a);
    }
    else if(k<=a){
        printf("%d\n",k);
    }

    else {
            j=a-(k-a-b);
        printf("%d\n",j);
    }


    return 0;
}
