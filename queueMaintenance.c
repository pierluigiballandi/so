#include <stdio.h>
#include <stdlib.h>
#include "p1test.c"

/*Inserisce il ProbBlk */
void insertProcQ(struct clist *q, struct pcb_t *p);

struct pcb_t *removeProcQ(struct clist *q);

struct pcb_t *outProcQ(struct clist *q, struct pcb_t *p);

struct pcb_t *headProcQ(struct clist *q);