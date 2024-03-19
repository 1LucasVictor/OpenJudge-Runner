#include <stdio.h>
int main(){
 int S, h, m;
 scanf("%d",&S);
 h = S / (60*60);
 S -= h * 60 * 60;
 m = S / 60;
 S -= m * 60;
 printf("%d:%d:%d\n", h, m, S);
 return 0;
}