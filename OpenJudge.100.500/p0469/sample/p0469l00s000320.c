#include <stdio.h>
int main(void) {

    int value = 0;

    int min = 0;
    
    int max = 0;

    char str[1000];

    scanf("%d%*c",&value);
 
    fgets(str,sizeof(str),stdin);

    sscanf(str,"%d %d",&min,&max);

    for (int i = min; i <= max; i++) {

        if (i % value == 0) {

            printf("%s\n","OK");

            return 0;

        }



    }

    printf("%s\n", "NG");

    return 0;
}