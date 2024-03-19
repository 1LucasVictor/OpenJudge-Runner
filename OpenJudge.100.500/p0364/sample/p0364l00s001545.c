int main(void){
        int W,H,x,y,r;
        scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

        if(x-r<0||y-r<0||x+r>W||y+r>H){
                puts("No");
    }else
                puts("Yes");

        return 0;
}