/*
 * main.c
 *
 *  Created on: 2019/06/22
 *      Author: family
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char S[5];
    int i = 0, same0 = 0, ans = 0;
    scanf("%s", S);
    for(i = 1; i < 4; i++) {
    	if(S[0] == S[i]) {
    		same0++;
    	}
    }
    if(same0 == 1) {
    	if((S[0] == S[1]) && (S[2] == S[3])) {
    		ans++;
    	}
    	if((S[0] == S[2]) && (S[1] == S[3])) {
    		ans++;
    	}
    	if((S[0] == S[3]) && (S[1] == S[2])) {
    		ans++;
    	}
    }

    if(ans == 0) {
    	printf("No\n");
    } else {
    	printf("Yes\n");
    }
    return 0;
}
