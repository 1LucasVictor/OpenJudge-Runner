#include<stdio.h>

int main(void) {
        int stack_data[10];
        int stack_num=0;
        int tmp = 0;
        int i;
        while(scanf("%d", &tmp) != EOF) {
                if(tmp!=0) {
                        stack_data[stack_num] = tmp;
                        stack_num++;
                } else {
                        stack_num--;
                        printf("%d\n", stack_data[stack_num]);
                        stack_data[stack_num] = 0;
                }
        }

        return 0;
}