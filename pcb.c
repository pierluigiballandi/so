#include "include/const.h"
#include "include/clist.h"
#include "include/pcb.h"
#include "include/asl.h"
#include "include/struct.h"

/*Gestione lista dei processi*/

/*I processi che non sono più in uso vengono restituiti alla lista tramite questa funzione. */

void freePcb(struct pcb_t *p);


/*Allocazione PCB*/

struct pcb_t *allocPcb();


/*Inizializzazione della lista pcbFree con elementi dell'array MAXPROC ProbBlock's*/

void initPcbs(void);



/*Gestione coda*/

/*Inserisce il ProbBlk */

void insertProcQ(struct clist *q, struct pcb_t *p);

struct pcb_t *removeProcQ(struct clist *q);

struct pcb_t *outProcQ(struct clist *q, struct pcb_t *p);

struct pcb_t *headProcQ(struct clist *q);



/* Alberi */

int emptyChild(pcb_t *p);
void insertChild(pcb_t *parent, pcb_t *p);
pcb_t *removeChild(pcb_t *p);
pcb_t *outChild(pcb_t *p);