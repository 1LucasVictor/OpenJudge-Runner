#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
        char buf[128]={0};
        int s[3]={0};
        int ans = 0;

        memset(buf, 0, sizeof(buf));
        if(fgets(buf, sizeof(buf)-1, stdin)==NULL){
                return 1;
        }

        for(int i=0; i<3; i++){
                char c[2] = {0};
                c[0] = buf[i];
                ans += atoi(c);
        }

        printf("%d\n",ans);
        return 0;

}