#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, k = 0, greater = 0, smaller = 0, coords[6];

    scanf("%d", &coords[0]);
    scanf("%d", &coords[1]);
    scanf("%d", &coords[2]);
    scanf("%d", &coords[3]);
    scanf("%d", &coords[4]);
    scanf("%d", &k);

    for (int i = 0; i < 5; i++) {
        greater = (greater > coords[i]) ? greater : coords[i];
        smaller = (smaller < coords[i]) ? smaller : coords[i];
    }

    if (greater-smaller > k) printf(":(\n");
    else printf("Yay!\n");

    return 0;
}
