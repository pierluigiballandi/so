#include <stdio.h>
#include <stdlib.h>
#include "clist.h"

struct semd_t;

struct pcb_t {
	struct pcb_t p_parent; //pointer to parent
	struct semd_t *p_cursem; //pointer to the semd_t on which process blocked
	state_t p_s; //processor state (????)
	struct clist p_list; //process list
	struct clist p_children; //children list entry point
	struct clist p_siblings; //childern list: links to the siblings

};

