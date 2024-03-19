#include <stdio.h>

int main(){
        int h, f, turu, kame, flg;

        scanf("%d %d", &h, &f);

        for (turu = 0; turu <= h; turu++) {
                kame = h - turu;
                flg = (h == kame + turu) && (f == 2 * turu + 4 * kame);
                if (flg) {
                        break;
                }
        }
        if(flg){
                printf("Yes", turu);
        }else{
                printf("No");
        }
        return 0;
}
