#include <stdio.h>
int main() {
    int L, R;
    int ans = 2020;
    scanf("%d%d",&L,&R);
    if (R-L+1 >= 2019) {
        printf("%d\n", 0);
    }
    else {
        for (int i=L; i<R+1;i++) {
            for (int j=i+1; j<R+1; j++){
                if (ans > ((i*j) % 2019)) {
                    ans = ((i*j) % 2019);
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}