/**
 * While with memory access (substitute N with the actual unrolling)
**/	
	struct listNode {
		int val;
		struct listNode *next;
	};
	
	
	struct listNode* memWhile(struct listNode *x)
	/*@ rule <k> $ => return 0; ...</k>
	         <heap>... list(x)(A) ...</heap>  if len(A)=N */
	{
		int i;
		i=N;
		while(i>0){
			x=x->next;
			i=i-1;
		}
 		return x;
	}


//@ var A : Seq



