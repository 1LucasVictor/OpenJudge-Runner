
int main(){
    
    char num[1000];
    char ans[1000];
    char fun[20];
    int i,j,q;
    int a,b;
    char t;

    scanf("%s",num);
    scanf("%d",&q);
    
    for(i=0;i<q;i++){
      scanf("%s",fun);
        if(strcmp(fun,"print")==0){
            scanf("%d %d",&a,&b);
            for (j=a; j<b+1; j++) {
                printf("%c",num[j]);
            }
            printf("\n");
            
        }else if(strcmp(fun,"replace")==0){
            scanf("%d %d %s",&a,&b,ans);
            for (j=0; j<b-a+1; j++) {
                num[a+j]=ans[j];
            }
        }else if(strcmp(fun, "reverse")==0){
            scanf("%d %d",&a,&b);
            while(a<b){
                t=num[a];
                num[a]=num[b];
                num[b]=t;
                a++;
                b--;
            }
        }
    }
    
    return 0;
}