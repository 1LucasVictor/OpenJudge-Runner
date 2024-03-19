#include <stdio.h>
  
int main(){
        int val[5];
        int valmax,valmin,i,k;

        for(i = 0; i < 5; i++){
                scanf("%d", &val[i]);
        }
        scanf("%d", &k);

        valmax = valmin = val[0];
        for(i = 1; i < 5; i++){
                if(valmax < val[i])valmax = val[i];
                if(valmin > val[i])valmin = val[i];
        }

        if((valmax - valmin) <= k)printf("Yay!\n");
        else printf(":(\n");

        return 0;
}
