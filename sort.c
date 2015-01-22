/**
 * Insertion sort (substitute N with the actual list lenght)
**/	
#include <stdlib.h>

	struct listNode {
		int val;
		struct listNode *next;
	};
	
	
	struct listNode* insertion_sort(struct listNode* x)
	/*@ rule <k> $ => return ?x; ...</k>
	<heap>... list(x)(A) => list(?x)(?A) ...</heap>
	if isSorted(?A) /\ seq2mset(A)=seq2mset(?A) /\ len(A)=N */
	{
		struct listNode* y;
		
		y = NULL;
		
		while (x != NULL) {
			struct listNode* n;
			
			n = x;
			x = x->next;
			n->next = NULL;
			if (y != NULL) {
				if (y->val < n->val) {
					struct listNode* z;
					
					z = y;
					while (z->next != NULL && z->next->val < n->val)
					z = z->next;
					
					n->next = z->next;
					z->next = n;
				}
				else {
					n->next = y;
					y = n;
				}
			}
			else {
				y = n;
			}              
		}
		
		return y;
	}


//@ var A : Seq	
