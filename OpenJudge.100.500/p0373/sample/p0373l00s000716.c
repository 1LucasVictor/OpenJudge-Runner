int main(void)
{
    char frame,body;
    frame = '#';
    body = '.';
    int height,width;
    
    while(1){
        scanf("%d%d",&height,&width);
        
        for(int i=0;i<height;i++){
            if(i == 0 || i == height-1) {
                for(int k =0;k < width;k++){
                  putchar(frame);
                }
                printf("\n");
            }
            
            else{
                for(int j=0;j<width;j++){
                if(j==0 || j == width-1) putchar(frame);
                else putchar(body);
            }
                printf("\n");
        }
        }
        if(height+width ==0) return 0;
        printf("\n");
    }
    
    return 0;
}
