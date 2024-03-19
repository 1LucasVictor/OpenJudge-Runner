#include <stdio.h>
int main(){
    int n,artnum[4][14],y,i,j;
    char x;
    scanf("%d",&n);

    for(i=0; i<4; i++){
        for(j=0; j<13; j++){
            artnum[i][j] = 0;
        }
    }
    for(j=0; j<n; j++){
        scanf(" %c %d",&x,&y);
        if(x == 'S'){
            artnum[0][y] = 1;
        }else if(x == 'H'){
            artnum[1][y] = 1;
        }else if(x == 'C'){
            artnum[2][y] = 1;
        }else if(x == 'D'){
            artnum[3][y] = 1;
        }
    }
    for(i=0; i<4; i++){
        for(j=1; j<14; j++){
            if(artnum[i][j] != 1){
                if(i ==0){
                    x ='S';
                }else if(i==1){
                    x ='H';
                }else if(i==2){
                    x ='C';
                }else if(i==3){
                    x ='D';
                }
                printf("%c %d\n",x,j);
            }
        }
    }
    return 0;
}