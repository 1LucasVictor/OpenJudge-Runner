#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1200]={'\0'}, buf;
    int i;
    
    i=0;
    while ((buf = getchar()) != '\n') {
        str[i] = buf;
	i++;
    }
    for (i=0; i<=sizeof(str); i++) {
        if (str[i]<=122 && str[i]>=97) {
	    str[i]-=32;
	} else if (str[i]<=90 && str[i]>=65) {
	    str[i]+=32;
	}
    }
    printf("%s\n", str);
    
    return 0;
}
