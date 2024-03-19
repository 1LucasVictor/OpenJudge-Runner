#include <stdio.h>

#define MAX_PLACE_NUM 3
#define PUT_ON 1


int main(void)
{
    char plc[MAX_PLACE_NUM];
    int placed_cnt;
    int i;

    //Initialize
    placed_cnt = 0;
    //Input
    scanf("%s", plc);

    for(i=0; i<MAX_PLACE_NUM; i++){
        if(plc[i]=='1'){
            placed_cnt++;
        }
    }
    printf("%d\n", placed_cnt);
}