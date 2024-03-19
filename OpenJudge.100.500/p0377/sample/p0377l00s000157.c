#include <stdio.h>

int main(int argc, const char * argv[]) {
    int tr[4][13];
    for(int i = 0 ; i < 4 ; i++){
        for(int x = 0 ; x < 13 ; x++){
            tr[i][x] = 0;
        }
    }
    int c,e;
    scanf("%d",&c);
    for(int d = 0 ; d < c ; d++){
    char a;
    scanf("%s",&a);
    int b;
    scanf("%d",&b);
        e = 0;
        if(a == 'S'){
            while(e+1 != b){
                e++;
            }
            tr[0][e] = 1;
        }else if(a == 'H'){
            while(e+1 != b){
                e++;
            }
            tr[1][e] = 1;
        }else if(a == 'C'){
            while(e+1 != b){
                e++;
            }
            tr[2][e] = 1;
        }else if(a == 'D'){
            while(e+1 != b){
                e++;
            }
                tr[3][e] = 1;
        }
    }
    for(int i = 0 ; i < 4 ; i++){
        for(int x = 0 ; x < 13 ; x++){
            if(tr[i][x] == 0){
                if(i == 0){
                    printf("S %d\n",x+1);
                }else if(i == 1){
                    printf("H %d\n",x+1);
                }else if(i == 2){
                    printf("C %d\n",x+1);
                }else{
                    printf("D %d\n",x+1);
                }
            }
        }
    }
}

