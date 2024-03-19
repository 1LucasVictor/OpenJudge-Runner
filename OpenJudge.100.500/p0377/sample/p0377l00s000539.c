#include<stdio.h>
int main(void)
{
        int card[4][13];
        int n,i,j,l,temp;
        char c;
        scanf("%d",&n);
        for(i = 1;i <= n*2;i++){
                scanf("%c %d",&c,&l);
                if(c == 'S'){
                        card[0][l] = 1;
                }else if(c == 'H'){
                        card[1][l] = 1;
                }else if(c == 'C'){
                        card[2][l] = 1;
                }else if(c == 'D'){
                        card[3][l] = 1;
                }
        }
        for(i = 0;i <= 4;i++){
                for(j = 1;j <= 13;j++){
                        if(card[i][j] != 1){
                                if(i == 0){
                                        printf("S %d\n",j);
                                }else if(i == 1){
                                        printf("H %d\n",j);
                                }else if(i == 2){
                                        printf("C %d\n",j);
                                }else if(i == 3){
                                        printf("D %d\n",j);
                                }
                        }
                }
        }
        return 0;
}