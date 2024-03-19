#include <stdio.h>

int main(void)
{
    long int L,R;
    int i,j;
    long int tmp;
    int min = 2019*2019;

    scanf("%ld %ld",&L,&R);

    if(R-L >= 2019){
        printf("0\n");
        return 0;
    }

    L = L%2019;
    R = R%2019;
    if(L > R) {
        tmp = L;
        L = R;
        R = tmp;
    }
    //printf("%ld %ld\n",L,R);
    //LとRは2019以下で、Lの方がRよりも小さい数

    if(L+1 >= R){
        min = L*R;
        min = min%2019;
    } else {
        for(i=L; i<R-1; i++){
            for(j=i+1; j<=R; j++){
                tmp = i*j;
                tmp = tmp%2019;
                if(min > tmp){
                    min = tmp;
                }
            }
        }
    }



    printf("%d\n",min);
    
    return 0;
}