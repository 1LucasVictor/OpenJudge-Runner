#include<stdio.h>
char str[1001],com[9],cp[1001],p[1001];
 
void reset(void);
void reset2(void);
 
 
main()
{
     
    int q,a,b,c,c2,FLAG;
     
    scanf("%s",str);
     
    scanf("%d",&q);
     
    while(q){
        FLAG=3;
        reset();
         
        scanf("%s",com);
         
        if(strcmp(com,"print")==0  ) {FLAG=0;}
        if(strcmp(com,"reverse")==0) {FLAG=1;}
        if(strcmp(com,"replace")==0) {FLAG=2;}
         
         
        switch(FLAG){
            case 0: //print
                scanf("%d %d",&a,&b);
                for(c=a;c<=b;c++){
                    printf("%c",str[c]);
                }
                printf("\n");
                break;
             
            case 1: //reverse
                scanf("%d %d",&a,&b);
                reset2();
                strcpy(cp,str);
                for(c=a,c2=b;c<=b;c++,c2--){
                    str[c]=cp[c2];
                }
                break;
             
            case 2: //replace
                scanf("%d %d",&a,&b);
                scanf("%s",p);
                 
                for(c=a,c2=0;c<=b;c++,c2++){
                    str[c]=p[c2];
                }
                break;
             
            default:q++;break;
        }
        q--;
    }
    return 0;
}
 
void reset(){
    int a;
     
    for(a=0;a<9;a++){
        com[a]=0;
    }
}
 
void reset2(){
    int a;
     
    for(a=0;a<1001;a++){
        cp[a]=0;
        p[a]=0;
    }
}

