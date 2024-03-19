#include<stdio.h>
int main(void)
{
    int n,c,i,m;
    char b;
    scanf("%d",&n);
    int a[4][13]={0};
    for(i=0;i<n*2;i++){
        scanf("%c %d",&b,&c);
        switch(b){
            case 'S':
            a[0][c-1] =c;
            break;
            case 'H':
            a[1][c-1] =c;
            break;
            case 'C':
            a[2][c-1] =c;
            break;
            case 'D':
            a[3][c-1] =c;
            break;
        }
    }
    for(i=0;i<4;i++){
        for(m=0;m<13;m++){
            if(a[i][m]==0){
                switch(i){
                    case 0:
                    printf("S %d\n",m+1);
                    break;
                    case 1:
                    printf("H %d\n",m+1);
                    break;
                    case 2:
                    printf("C %d\n",m+1);
                    break;
                    case 3:
                    printf("D %d\n",m+1);
                    break;
                }
            }
        }
    }
    return 0;
}
