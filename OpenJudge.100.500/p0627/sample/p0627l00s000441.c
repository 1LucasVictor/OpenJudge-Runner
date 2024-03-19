#include <stdio.h>
#include <math.h>
int main (){
    int a,b;
    int m[3];
    int max=0;
    scanf("%d %d",&a,&b);
    m[0]=a+b;
    m[1]=a-b;
    m[2]=a*b;
    for(int i=0;i<=2;i++)
    {
        if(m[i]>=max){
            max=m[i];
        }
    }
    printf("%d",max);
    return 0;
}