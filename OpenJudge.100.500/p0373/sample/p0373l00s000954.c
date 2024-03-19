#include <stdio.h>

int main(){

int h, w;
int x, y;
char c;

while (1){
scanf("%d %d", &h, &w);

if (h == 0 && w == 0) break;

for  (y = 0; y < h; y++ ){
        for (x = 0; x < w; x++){
                if (y == 0 || y == h - 1 || x == 0 || x == w - 1 ) c = '#';
                else c = '.';

                printf("%c", c);}
                printf("\n");
                        }
                printf("\n");
}
return 0;
}