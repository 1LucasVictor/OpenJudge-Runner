#include <stdio.h>
#include <string.h>

int main(void) {
    int debt;
    int tmp;
    int count;
    debt = 100000;
    scanf("%d",&count);
    while(count != 0){
        debt = (int)((double)debt * 1.05);
        if(debt%1000 != 0){
            debt = ((debt/1000)+1) * 1000;
        }
        count--;
    }
    printf("%d\n",debt);
	return 0;
}