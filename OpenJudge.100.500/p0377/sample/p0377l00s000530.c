#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char trump[] = {'S', 'H', 'C', 'D'};

int toNum(char c)
{
    switch(c) {
     case 'S': return 0;
     case 'H': return 1;
     case 'C': return 2;
     case 'D': return 3;
     default : return -1;
    }
}

char toTrump(int n)
{
    return trump[n];
}

int main(void)
{
    int i, j, n;
    int lank, mark;
    char str[6];
    char *t;
    unsigned int data[4];

    scanf("%d", &n);
    scanf("%*c");

    for(i=0;i<n;i++) {
        //scanf("%c%*c%d", &temp, &lank);
        fgets(str,6, stdin); //printf("fgets=%s\n", str);
        t = strtok(str, " \n"); //printf("get t\n");
        mark = toNum(t[0]);
        //printf("num=%d\n", mark);
        lank = atoi(strtok(NULL, " \n"));
        //printf("lank=%d\n", lank);
        data[mark] |= 1<<(lank-1);
        //printf("%x\n", data[mark]);
        //printf("end\n");
    }

    for(i=0;i<4;i++) {
        for(j=0;j<13;j++) {
            if((data[i] & 1<<j) == 0) {
                printf("%c %d\n", toTrump(i), j+1);
            }
        }
    }

    return 0;
}