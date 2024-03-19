#include <stdio.h>

int main(void){

int i,s;

char x[1001];

while(scanf("%s\n",&x),x[0]!='0'){

    s=0;

    for(i=0;x[i]!='\0';i++){

        s+=x[i]-'0';

    }

    printf("%d\n",s);

}

return 0;

}
