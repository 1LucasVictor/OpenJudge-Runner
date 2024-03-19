#include<stdio.h>
int main(void){
        int a,b,c,i,n;
        char s[128];

        sscanf(fgets(s,sizeof(s),stdin),"%d",&n);

        for(i=0;i<n;i++){
                fgets(s,sizeof(s),stdin);
                sscanf(s,"%d %d %d",&a,&b,&c);

                if(
                                ((a^2) == (b^2) + (c^2))||
                                ((b^2) == (a^2) + (c^2))||
                                ((c^2) == (a^2) + (b^2))
                        )
                {
                        printf("YES\n");
                }
                else
                {
                        printf("NO\n");
                }
        }
        exit(0);
}