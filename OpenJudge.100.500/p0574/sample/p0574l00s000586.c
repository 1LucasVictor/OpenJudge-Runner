#include <string.h>
int main(void) {
    int s;
    scanf("%d",&s);
    int seq[4];

    int i,c;
    int flag = 0;
    int tmp = s;
    int tmp2;
    for(i=0;i<4;i++){
        tmp2 = tmp;
        tmp = tmp/10;
        c = tmp2%10;
        seq[i] = c;
        if(i>0) {
            if(seq[i] == seq[i-1]) {
                flag = 1;
            }
        }
    }
    if(flag==1)
        printf("Bad\n");
    else
        printf("Good\n");

    return 0;
}