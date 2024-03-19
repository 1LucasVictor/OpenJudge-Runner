
#include <stdio.h>
int MIN(int a,int b){
    return a<b?a:b;
}
int main()
{   long long l,r;
    scanf("%lld%lld",&l,&r);
    int min=2019;
    if(r-l>=2019){
    printf("0");}else{
        for(long long i=l;i<r;i++){
            for(long long  j=i+1;j<=r;j++){
                min=MIN(i*j%2019,min);
            }
        }
    }
    printf("%d",min);
    return 0;
}
