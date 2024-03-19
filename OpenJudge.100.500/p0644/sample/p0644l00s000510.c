#include<stdio.h>
int main()
{
    int a,i,count=0;
    int b[3];
    scanf("%d",&a);
    for(i=0;a!=0;i++){
    b[i]=a%10;
    a=a/10;
    }
     for(i=0;i<3;i++){
    if(b[i]==1){
        count++;
    }
    }
    printf("%d",count);
    return 0;
}
