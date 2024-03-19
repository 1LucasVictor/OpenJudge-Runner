#include<stdio.h>

int main(void)
{
int A,B,K,C,p,q,kotae,i;

        scanf("%d%d%d",&A,&B,&K);

        if(A>B) C=A;
        else C=B;

        for(i=C; i>0; i--){
           p=A%i;
           q=B%i;
                if((p==0) && (q==0)) K--;
                if(K==0) kotae = i;

}
        printf("%d\n",kotae);
        return 0;
}

