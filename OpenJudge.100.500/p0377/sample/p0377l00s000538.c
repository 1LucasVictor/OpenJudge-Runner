#include<stdio.h>
 
int main()
{
    int cards[99][99]={0},a,c,i,j;
    char b, d[5]="SHCD";
    scanf("%d\n", &a);
    for(i = 0; i < a; cards[b][c] = 1,i++){
        scanf("%c %d\n",&b,&c);
    }
    for(i=0;i<4;i++){
        for(j=1;j<14;j++){
            if(!cards[d[i]][j]){
                printf("%c %d\n",d[i],j);
            }
        }
    }
    return 0;
}
