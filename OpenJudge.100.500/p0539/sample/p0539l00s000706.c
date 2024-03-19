#include <stdio.h>
#include <stdlib.h>
int main(void) {
int N;
scanf("%d",&N);
int count =0;
if (N==1) {printf("Yes");return 0;}
for (int i=2;i<=9;i++){
float div = (float)N/i;
int di = (int)div;
    if (div*(float)i==(float)N && div<10 && (float)di==div){count++;
            printf("Yes");
                break;}
    else if (count==0 && i%9==0) {printf("No");}
}

return EXIT_SUCCESS;
}
