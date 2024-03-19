    #include<stdio.h>
    #include<string.h>
    int main(void){
            int b=0,r=0,i,n;
            char s[10000];
            scanf("%s",s);
            n=strlen(s);
            for(i=0;i<n;i++){
                    if(s[i]==0x30) r++;
                    else b++;}
            if(r>=b) printf("%d",2*b);
            else printf("%d",2*r);
            return 0;
    }