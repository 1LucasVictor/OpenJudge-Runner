#include<stdio.h>
 
int main(void) {
    char str[1001];
    char strc[1001];
    char p[1001];
    char o[10];
    char out[100000];
    int sl = 0;
    int l = 0;
    int a, b, q;
    int i, j;
     
    out[0] = 'a';
     
    scanf("%s", &str);
    scanf("%d", &q);
     
    for(j = 0; str[j] != '\0'; j++) {
        sl++;
    }
     
    for(i = 0; i < q; i++) {
        scanf("%s", &o);
         
        if(o[2] == 'i') {
            //print
            scanf("%d %d", &a, &b);
            for(j = 0; j < b-a+1; j++) {
                out[l+j] = str[j+a];
            }
            l+=b-a+1;
            out[l] = '\n';
            l++;
        } else if(o[2] == 'v') {
            //reverse
            scanf("%d %d", &a, &b);
            for(j = 0; j < sl; j++) {
                strc[j] = str[j];
            }
            for(j = 0; j < b-a+1; j++) {
                str[j+a] = strc[b-j];
            }
             
        } else if(o[2] == 'p') {
            //replace
            scanf("%d %d %s", &a, &b, p);
            for(j = 0; j < b-a+1; j++) {
                str[j+a] = p[j];
            }
        }
    }
    out[l] = '\0';
     
    printf("%s", out);
     
    return 0;
}
    