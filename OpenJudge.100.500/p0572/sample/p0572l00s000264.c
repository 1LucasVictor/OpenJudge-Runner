#include <stdio.h>
int main(void) {
    int l,r;
    int tmp=0;
    scanf("%d%d",&l, &r);
    int i,j;
    int min = 0;
    for(i=l;i<=r;i++){
        for(j=i+1;j<=r;j++){
            tmp = (i*j)%2019;
            if(min == 0)
                min = tmp;
            else if(min>tmp)
                min = tmp;
        }
    }
    printf("%d\n",min);
}