

#include <stdio.h>
int main(){
    int n,x,i,j,a[4][17]={};
    char y;

    scanf("%d",&n);  //何枚入力するか入力

    for(i=0;i<n;i++){
     scanf(" %c %d",&y,&x);   //xは数字、yはマーク
     switch(y){
         case'S':
             a[0][x-1]=x;
             break;
         case'H':
             a[1][x-1]=x;
             break;
         case'C':
             a[2][x-1]=x;
             break;
         case'D':
             a[3][x-1]=x;
             break;
     }
    }

    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(a[i][j]==0){
                switch(i){
                    case 0:
                        printf("%c %d\n",'S',j+1);
                        break;
                    case 1:
                        printf("%c %d\n",'H',j+1);
                        break;
                    case 2:
                        printf("%c %d\n",'C',j+1);
                        break;
                    case 3:
                        printf("%c %d\n",'D',j+1);
                        break;
                }
            }
        }
    }
    return 0;
}

