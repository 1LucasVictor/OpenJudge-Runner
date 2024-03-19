#include <stdio.h>
#include <ctype.h>  //toupper function使う

void func (char *p);

int main () {
    char a[1600];
    fgets (a,1600,stdin);
    func (a); 
    
    printf ("%s",a);
    return 0;
}

void func (char *p) {
    while (*p != '\0' ) { //空白来ても続ける
        if (islower (*p)) { //小文字来たら
            *p = toupper (*p);
        } else {
            *p = tolower (*p) ;
        }
        *p ++;
    }
    
}
