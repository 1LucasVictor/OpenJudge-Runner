int main(){
    int h,w,a=0;
    while(1){
        scanf("%d %d",&h,&w);
        if(h==0&&w==0){
            break;
        }else{
            for(int i=w;i>0;i--){
                putchar('#');
            }
            putchar('\n');
            for(;h>2;h--){
                putchar('#');
            for(int i=w;i>2;i--){
                putchar('.');
            }
            printf("#\n");
        }
        for(int i=w;i>0;i--){
                putchar('#');
            }
        printf("\n\n");
        }
    }
}
