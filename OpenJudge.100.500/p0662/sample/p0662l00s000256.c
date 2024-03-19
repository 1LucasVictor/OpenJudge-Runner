#include<stdio.h>

int main(void)
{
        int a,b,c,d;
        int i,hajimari,owari,hajima,owa,byousuu;

        scanf("%d%d%d%d",&a,&b,&c,&d);

        if(a<c){
                hajimari = a;
                owari = b;
                hajima = c;
                owa = d;
        }
        else{
                hajimari = c;
                owari = d;
                hajima = a;
                owa = b;
        }

                if(owari<hajima){
                        printf("0\n");
                        return 0;
                }
                else{
                        if(owari>=owa){
                                byousuu = owa - hajima;
                                printf("%d\n",byousuu);
                                return 0;
                        }
                        else{
                                byousuu = owari - hajima;
                                printf("%d\n",byousuu);
                                return 0;
                        }
                }

        return 0;
}
