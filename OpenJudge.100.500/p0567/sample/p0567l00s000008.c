#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a-b==0){
        printf("%d\n",c);
    }
        else{
            if(c-(a-b)<0){
                printf("0\n");
            }
            else{
                printf("%d\n",c-(a-b));
            }
        }

    return 0;
}
