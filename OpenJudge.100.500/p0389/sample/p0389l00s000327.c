#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char	card;
	char	dmy[3];
	char*	fwd_p;
	char*	bk_p;
} CARD_T;

void func_init(char* data_p, int size, CARD_T *card_p,CARD_T **top_p,CARD_T **end_p)
{
	int i;

	memset(card_p,'\0',sizeof(CARD_T) * size);
	*top_p=0;
	*end_p=0;
	for (i=0 ; i<size ; i++,card_p++,data_p++) {
		card_p->card = *data_p;
		if (i == (size-1)) {
			card_p->fwd_p  = NULL;
			card_p->bk_p   = (char*)(card_p-1);
			*end_p = card_p;
		}
		else {
			card_p->fwd_p  = (char*)(card_p+1);
			if (i!=0) {
				card_p->bk_p  = (char*)(card_p-1);
			}
			else {
				card_p->bk_p  = NULL;
				*top_p = card_p;
			}
		}
	}
}
void func_get(int num,CARD_T *top_p,CARD_T *end_p,char *out_p)
{
	int i;

	CARD_T *wk_p;
	wk_p = top_p;
	for (i=0 ;i<num; i++) {
		out_p[i] = wk_p->card;
		wk_p = (CARD_T*)wk_p->fwd_p;
	}
	out_p[i]='\0';
}

void func_cut(int cut_num,CARD_T **top_p,CARD_T **end_p)
{
	CARD_T *wk_p,*secd_wk_p;
	int 	i;

	/**?????????????°?????????§??????**/
	(*end_p)->fwd_p = (char*)*top_p;
	secd_wk_p = (CARD_T*)((*top_p)->fwd_p);  //??????????????????????????????????????????????????????
	(*top_p)->bk_p    = (char*)*end_p;

	/**cut_num??????????????§???????????´??°**/
	wk_p = *top_p;
	for (i=1 ; i<cut_num ; i++) {
		wk_p = (CARD_T*)wk_p->fwd_p;
	}
	*top_p = (CARD_T*)wk_p->fwd_p;
	wk_p->fwd_p   = NULL;

	(*top_p)->bk_p = NULL;
	*end_p = wk_p;
}



int main()
{
	char data[256];
	int  m;
	int  h[100];
	static CARD_T card[256];
	static CARD_T *top_p;
	static CARD_T *end_p;
	char out_dt[256];
	int	 i;
	int  w_size;

	while(1) {
		scanf("%s",data);
		if (data[0]=='-') {
			return 0;
		}
		w_size  = strlen(data);
		scanf("%d",&m);
		for (i=0 ; i<m ; i++) {
			scanf("%d",&(h[i]));
		}

		func_init(data,w_size,card,&top_p,&end_p);

		for (i=0 ; i<m ; i++) {
			func_cut(h[i],&top_p,&end_p);
		}
		func_get(w_size,top_p,end_p,out_dt);
		printf("%s\n",out_dt);
	}
}