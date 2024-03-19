#include<stdio.h>
main()
{
    int a,b,i5=0,i7=0,i;
    for(i=0;i<3;i++){
        scanf("%d",&a);
        if(a==5){i5++;}
        if(a==7){i7++;}
    }
    if(i5==2&&i7==1){
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
