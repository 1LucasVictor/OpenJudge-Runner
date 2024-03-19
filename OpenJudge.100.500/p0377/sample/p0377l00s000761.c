#include<stdio.h>
#include<stdbool.h>

int pic_num(char pic){
    int p;
    switch ( pic ){
        case 'S':
            p = 0;
            break;
        case 'H':
            p = 1;
            break;
        case 'C':
            p = 2;
            break;
        case 'D':
            p = 3;
            break;
    }
    return p;
}

char num_pic(int p){
    char pic;
    switch ( p ){
        case 0 :
            pic = 'S';
            break;
        case 1 :
            pic = 'H';
            break;
        case 2 :
            pic = 'C';
            break;
        case 3 :
            pic = 'D';
            break;
    }
    return pic;
}

int main(void){
    int n,p,l,i;
    char pic;
    bool card[4][13];
    for ( p = 0 ; p < 4 ; p++ ){
        for ( l = 0 ; l < 13 ; l++ ){
            card[p][l] = true;
        }
    }
    scanf("%d", &n);
    for ( i = 0 ; i < n ; i++ ){
        scanf("%*c%c %d", &pic, &l);
        card[pic_num(pic)][l-1] = false;
    }
    for ( p = 0 ; p < 4 ; p++ ){
        for ( l = 0 ; l < 13 ; l++ ){
            if ( card[p][l] ) {
                printf("%c %d\n", num_pic(p), l+1);
            }
        }
    }
    return 0;
}
