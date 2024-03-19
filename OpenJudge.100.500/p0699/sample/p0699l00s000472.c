#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

        int i;
        int j;
        int k;
        int cnt5;
        int cnt7;

	// 個数のの入力
        cnt5 = 0;
        cnt7 = 0;
        scanf("%d %d %d",&i,&j,&k);

        if (i == 5) {
           cnt5 = cnt5 + 1;
        }
        if (i == 7) {
           cnt7 = cnt7 + 1;
        }
 

        if (j == 5) {
           cnt5 = cnt5 + 1;
        }
        if (j == 7) {
           cnt7 = cnt7 + 1;
        }


        if (k == 5) {
           cnt5 = cnt5 + 1;
        }
        if (k == 7) {
           cnt7 = cnt7 + 1;
        }


        if (cnt5 == 2) {
           if (cnt7 == 1) {
               printf("YES\n");
           }
           else {
               printf("NO\n");
           }
        }
        if (cnt5 != 2) {
               printf("NO\n");
        }
        
	return 0;
}