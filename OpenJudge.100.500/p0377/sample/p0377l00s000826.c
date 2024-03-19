#include <stdio.h>

int main(void){
    char suit[] = "SHCD";
    int card[52] = {0};
    int n;
    int i;
    int s;
    char buf[2];
    int cnum;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %d", buf, &cnum);
        switch (buf[0])
        {
            case 'S':
                s = 0;
                break;
            case 'H':
                s = 1;
                break;
            case 'C':
                s = 2;
                break;
            case 'D':
                s = 3;
                break;
        }
        card[s * 13 + cnum - 1] = 1;
    }
    for (i = 0; i < 52; i++)
    {
        if (card[i] == 0)
        {
            printf("%c %d\n", suit[i / 13], (i % 13) + 1);
        }
    }

    return 0;
}
