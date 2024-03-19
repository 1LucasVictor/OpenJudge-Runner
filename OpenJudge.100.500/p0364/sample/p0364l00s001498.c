

#include <stdio.h>

int main(void) {

    int width, hight, x, y, radius;

    

    scanf("%d%d%d%d%d", &width, &hight, &x, &y, &radius);

    

    if(x - radius >= 0 && x + radius <= width

        && y - radius >= 0 && y + radius <= hight) {

            printf("Yes\n");

    }

    else {

        printf("No\n");

    }

        return 0;

}

