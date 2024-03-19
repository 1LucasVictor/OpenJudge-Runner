#include <stdio.h>
#include <string.h>

int main(void) {
    char str[400]={'\0'}, tmp[200]={'\0'};
    int m, h, i, j, len;

    while (1) {
        scanf("%s", str);
        len=strlen(str);
        //printf("%d\n", len);
        //printf("%s\n", str);
        if (strcmp(str, "-")==0) break;
        scanf("%d", &m);
        while (m!=0) {
            j=0;
            scanf("%d", &h);
            strcat(str, str);
            for (i=h; i<len+h; i++) {
	        //printf("%c", str[i]);
	        tmp[j]=str[i];
            j++;
	    }
	    m--;
	    //strncpy(str, tmp, len);
	    //printf("%s\n", tmp);
	    for (i=0; i<sizeof(str); i++) str[i]='\0';
	    for (i=0; i<len; i++) str[i] = tmp[i];
	}
	printf("%s\n", str);
	for (i=0; i<sizeof(tmp); i++) tmp[i]='\0';
    }
    return 0;
}

