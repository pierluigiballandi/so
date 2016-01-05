#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"
#include "const.h"

int emptyChild(struct pcb_t *p);


void instertChild(struct pcb_t *parent, struct pcb_t *p);


struct pcb_t *removeChild(struct pcb_t *p);


struct pcb_t *outChild(struct pcb_t *p);