#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//============================================================================
#define PI 3.14159265359
#define succ(x) ((x)+1)
#define pred(x) ((x)-1)
//============================================================================
enum {stS, stH, stC, stD, stEND};
char Suit[]="SHCD";
void enter(FILE *file)
{
    int n,i,j,k; unsigned short card[stEND]; char suit[2];

    memset(card, 0, sizeof(card));
    fscanf(file, "%d", &n);
    for (i=0; i<n; i++){
        fscanf(file, "%s", suit);
        fscanf(file, "%d", &j);
        k=1<<pred(j);
        switch(*suit){
            case 'S': card[stS]|=k; break;
            case 'H': card[stH]|=k; break;
            case 'C': card[stC]|=k; break;
            case 'D': card[stD]|=k; break;
        }
    }
    for (i=0; i<stEND; i++)
    for (j=0, k=1; j<13; j++, k<<=1)
        if (!(card[i] & k))
            printf("%c %d\n", Suit[i], succ(j));
}
//============================================================================
#ifndef DESKTOP
int main(void)
{
    enter(stdin);
    return 0;
}
//============================================================================
#else
int main(void)
{
    FILE *file;

    file=fopen("inlost.txt", "r");
    enter(file);
    fclose(file);
    return 0;
}
#endif
//============================================================================