int main(){
    int H,W,a,b;
    while (1==1){
        scanf("%d%d", &H, &W);
        if (H ==0 && W == 0){
            break;
        }
        for (b=0;b<W;b++){
            printf("#");
        }
        printf("\n");
        for(a=1;a<H-1;a++){
            for (b=0;b<W;b++){
                if ((b==0)|| (b==W-1)){
                    printf("#");
                }else{
                    printf(".");
                }
            }
            printf("\n");
        }
        for (b=0;b<W;b++){
            printf("#");
        }
        printf("\n\n");
    }
    return 0;
}