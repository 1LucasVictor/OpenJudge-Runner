
#include<stdio.h>

int main(void){
    int n, m, s, c, flag = 1;
    scanf("%d""%d", &n, &m);
    int judge[n];
    for(int i = 0; i < n; i++){
        judge[i] = 0;
    }
    for(int i = 0; i < m; i++){
        scanf("%d""%d", &s, &c);
        if(s == 1 && c == 0){
            flag = 0;
            /* printf("i:%d\n", i); */
        }
        if(s != 1 && judge[s - 1] != 0 && judge[s - 1] != c){
            flag = 0;
            /*printf("i:%d\n", i);*/
        }
        if(judge[s - 1] >= c || judge[s - 1] == 0){
            judge[s - 1] = c;
        }

    }
    if(flag == 0 || judge[0] == 0){
        printf("%d\n", -1);
        return 0;
    }
    for(int i = 0; i < n; i++){
        printf("%d", judge[i]);
    }
    printf("\n");
    return 0;

}