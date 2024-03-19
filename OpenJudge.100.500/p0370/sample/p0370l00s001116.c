    #include <stdio.h>
    
    int main(void){
        int i,a,b;
        char op;

        for(i=1;;i++){
            scanf("%d %c %d",&a,&op,&b);
            if(op == '+'){printf("%d\n",(a+b));}
            else if(op == '-'){printf("%d\n",(a-b));}
            else if(op == '*'){printf("%d\n",(a*b));}
            else if(op == '/'){printf("%d\n",(a/b));}
            else if(op == '?'){break;}
        }
        return 0;
    }
