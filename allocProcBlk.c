#include <stdio.h>
#include <stdlib.h>
#include "p1test.c"


/*I processi che non sono più in uso vengono restituiti alla lista tramite questa funzione. */
void freePcb(struct pcb_t *p);



/*Allocazione PCB*/
struct pcb_t *allocPcb();



/*Inizializzazione della lista pcbFree con elementi dell'array MAXPROC ProbBlock's*/
void initPcbs(void);
