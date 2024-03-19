#include<stdio.h>
#include<string.h>
char hira[1<<21],sawa[256];
int main(int argc,char *argv[]){
    int hata;
    int fu,s,t;
    char c;
    sawa['T'] = 1;
    sawa['G'] = 2;
    sawa['C'] = 3;
    sawa['A'] = 4;
     
    scanf("%d", &fu);
    getchar();
    while (fu--) {
        s = 0;
        t = 1;
        hata = ( c = getchar() ) == 'i';
        while ( ( c = getchar() ) != ' ' );
        while ( ( c = sawa[getchar()] ) != 0 ) {
            s += c * t;
            t *= 4;
        }
        if (hata) hira[s] = 1; else puts( hira[s] ? "yes" : "no" );
    }
    return 0;
}