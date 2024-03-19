#include <stdio.h>
int main(void) {
    int l,r;
    int tmp,tmp2,tmp3;
    scanf("%d%d",&l, &r);
    int i,j;
    int min = -1;
    for(i=l;i<=r;i++){
        for(j=i+1;j<=r;j++){

            tmp = i%2019;
            tmp2 = j%2019;
            while(tmp>2019){
                tmp = tmp%2019;
                tmp2 = tmp2%2019;
            }
            tmp3 = (tmp*tmp2)%2019;
            if(min == -1)
                min = tmp3;
            else if(min == 0)
                break;
            else if(min>tmp3)
                min = tmp3;
        }
        if(min == 0)
            break;
    }
    printf("%d\n",min);
}