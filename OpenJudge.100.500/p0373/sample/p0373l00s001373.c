int main() {
    int H, W, i, x;
    for(;scanf("%d%d", &H, &W);){
        if(H == 0 && W == 0)break;
        for(i=0;i<H;i++){
            if(i==0|| i==(H-1))
                for(x=0;x<W;x++)
                    printf("#");
            else{
                printf("#");
                for(x=1;x<(W-1);x++)
                    printf(".");
                printf("#");}
            printf("\n");}
        printf("\n");}
    return 0;
}