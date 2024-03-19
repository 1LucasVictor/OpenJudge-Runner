#include <stdio.h>
#include <string.h>

#define NAME_MAX 10															/* ????????????????????§???										*/
#define QUEUE_MAX 100006													/* ?????????????????\????????§???									*/
#define VER_INIT 0															/* ?????°?????????											*/
#define STACK_MAX 1000														/* ?????????????????§???										*/
#define LOOP_INIT 0															/* ??????????????????											*/
#define PROCESS_END -1														/* ??????????????????											*/
#define FALSE 0																/* ?????????												*/
#define TRUE 1																/* ?????????												*/
#define EXIT_SUCCESS 0														/* ??£?????????????????????										*/

typedef struct {
	unsigned char aubG_Dp_name[ NAME_MAX ];									/* ???????????????											*/
	signed long slG_Drem_time;												/* ??????????????????????????????									*/
}Process;																	/* ?????????????§???????										*/

Process st_queue[ QUEUE_MAX ];												/* ?????????????????\?????????									*/
unsigned long ulG_Ddata_cnt;												/* ??????????????°?¨???¶?????°									*/
unsigned long ulG_Dquantum;													/* ????????????????¨???¶?????°									*/
unsigned long ulG_Dtotal_time = VER_INIT;									/* ????¨??????????????¨???¶?????°									*/
unsigned long ulG_Cend_cnt = VER_INIT;										/* ????????????????????°?¨???¶?????°								*/

void enqueue( 																/* ?????\???????????¢??°										*/
Process p_enq_add );														/* ??????????±??????????????????¢?????¬???							*/
Process dequeue( 															/* ?????\???????´?????????¢??°									*/
unsigned long ulW_Dqueue_add );												/* ??????????±?????´???¢?????¬???									*/

int main( void )
{
	unsigned long ulW_Cloop_cnt;											/* ?????????????????????										*/
	unsigned long ulW_Cstack_cnt = VER_INIT;								/* ????????????????????????????????????								*/
	Process st_stack[ STACK_MAX ];											/* ????????????????????????										*/

	scanf( "%ld %ld", &ulG_Ddata_cnt, &ulG_Dquantum );						/* ??????????????°????????????????????\???							*/
	/* ??\???????????? */
	for( ulW_Cloop_cnt = LOOP_INIT; ulW_Cloop_cnt < ulG_Ddata_cnt; ulW_Cloop_cnt++ ){
		scanf( "%s", st_queue[ ulW_Cloop_cnt ].aubG_Dp_name );				/* ?????????????????\???										*/
		scanf( "%ld", &st_queue[ ulW_Cloop_cnt ].slG_Drem_time );			/* ??????????????????????????\???									*/
	}/* ??\????????????????????? */

	/* ?????\?????????????????? */
	for( ulW_Cloop_cnt = LOOP_INIT; ulW_Cloop_cnt < ulG_Ddata_cnt + ulG_Cend_cnt; ulW_Cloop_cnt++ ){
		st_stack[ ulW_Cstack_cnt ] = dequeue( ulW_Cloop_cnt );				/* ?????\???????´????????????°?????????????±???¢?????¬???????????????			*/
		/* ??????????????????????????????????????????????????????????????´??? */
		if( st_stack[ ulW_Cstack_cnt ].slG_Drem_time != PROCESS_END ){
			enqueue( st_stack[ ulW_Cstack_cnt++ ] );						/* ?????\???????????¢??°?????????????±??????????????????¢?????¬???????????????	*/
		}
		else{
			/* else?????????????????????????????\ */
		}
	}/* ?????\??????????????????????????? */
	return EXIT_SUCCESS;
}

void enqueue( 																/* ?????\???????????¢??°										*/
Process p_enq_add )															/* ??????????±??????????????????¢?????¬???							*/
{
	printf( "%s %ld\n", p_enq_add.aubG_Dp_name, p_enq_add.slG_Drem_time );	/* ???????????????????????????????????¨????????£??????????????????			*/
}

Process dequeue( 															/* ?????\???????´?????????¢??°									*/
unsigned long ulW_Dqueue_add )												/* ??????????±?????´???¢?????¬???									*/
{
	unsigned char ubW_Fqueue_flag = FALSE;									/* ?????\???????????¨????????°									*/

	/* ??????????±????????????????????????????????????????????????\????????´??? */
	if( st_queue[ ulW_Dqueue_add ].slG_Drem_time <= ulG_Dquantum ){
		ulG_Dtotal_time += st_queue[ ulW_Dqueue_add ].slG_Drem_time;		/* ????¨??????????????????????????±?????????????????????????????????????		*/
		st_queue[ ulW_Dqueue_add ].slG_Drem_time = ulG_Dtotal_time;			/* ??????????±???????????????????????????????????¨??????????????????£??\		*/
		ubW_Fqueue_flag = TRUE;												/* ?????\???????????¨????????°???TRUE???							*/
	}
	else{
		ulG_Dtotal_time += ulG_Dquantum;									/* ????¨????????????????????????????????????????						*/
		/* ?????????????????° + ????????????????????°????????°??????????????????????????????????????????????±???????????????????????????? - ???????????????????????£??\ */
		st_queue[ ulG_Ddata_cnt+ ulG_Cend_cnt ].slG_Drem_time = st_queue[ ulW_Dqueue_add ].slG_Drem_time - ulG_Dquantum;
		/* ?????????????????° + ????????????????????°????????°???????????????????????????????±???????????????????????????£??\ */
		strcpy( st_queue[ ulG_Ddata_cnt + ulG_Cend_cnt ].aubG_Dp_name, st_queue[ ulW_Dqueue_add ].aubG_Dp_name );
		ulG_Cend_cnt++;														/* ????????????????????°????????????????????????						*/
	}

	/* ?????\???????????¨????????°???FALSE?????´??? */
	if( ubW_Fqueue_flag == FALSE ){
		st_queue[ ulW_Dqueue_add ].slG_Drem_time = PROCESS_END;				/* ??????????±???????????????????????????????????????????????????????			*/
	}
	else{
		/* else?????????????????????????????\ */
	}
	return st_queue[ ulW_Dqueue_add ];										/* ??????????±??????????????????????								*/
}