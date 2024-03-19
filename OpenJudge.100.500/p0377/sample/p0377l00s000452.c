#include <stdio.h>
int main(void){
    int i,j,n,num;
    int c[4][13]={};
    char pi;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("\n%c %d",&pi,&num);
        switch(pi){
            case 'S':
                c[0][num-1]=1;
                break;
            case 'H':
                c[1][num-1]=1;
                break;
            case 'C':
                c[2][num-1]=1;
                break;
            case 'D':
                c[3][num-1]=1;
                break;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(c[i][j]==0){
                if(i==0)
                    printf("%c %d\n",'S',j+1);
                else if(i==1)
                    printf("%c %d\n",'H',j+1);
                else if(i==2)
                    printf("%c %d\n",'C',j+1);
                else
                    printf("%c %d\n",'D',j+1);
            }
        }
    }
    return 0;
}
