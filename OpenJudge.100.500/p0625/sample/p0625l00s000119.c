#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int i,j;
    scanf("%d",&i);
    scanf("%d",&j);
    if (i<9 && j<9) printf("%s\n","Yay!");
    else printf("%s\n",":(");
    
    return 0;
}