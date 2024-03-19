#include<stdio.h>

int main(){
    int a[4][13];
    char ch;
    int x,y;
    
    for(int b=0;b<4;b++){
        for(int c=0;c<13;c++){
            a[b][c] = 0;
        }
    }
    scanf("%d",&y);
    for(int i=0;i<y;i++){
        scanf("%c",&ch);
        scanf("%c %d",&ch,&x);
        if(ch == 'S'){
            a[0][x-1] = 1;
        } else if(ch == 'H'){
            a[1][x-1] = 1;
        }else if(ch == 'C'){
            a[2][x-1] = 1;
        }else if(ch == 'D'){
            a[3][x-1] = 1;
        }
    }
    for(int j=0;j<13;j++){
            if(a[0][j] == 0) printf("S %d\n",j+1);
    }
    for(int j=0;j<13;j++){
            if(a[1][j] == 0) printf("H %d\n",j+1);
    }
    for(int j=0;j<13;j++){
            if(a[2][j] == 0) printf("C %d\n",j+1);
    }
    for(int j=0;j<13;j++){
            if(a[3][j] == 0) printf("D %d\n",j+1);
    }
    return 0;
}
