/**
 * Fibonacci recursive benchmark (substitute N with the actual unrolling)
**/	
	int fibo(int n)
	{
		if(n<=0){
			return 0;
		}
		if(n==1){
			return 1;
		}
		return fibo(n-1)+fibo(n-2);
		
	}
	
	int tramp(int n)
	//@ rule <k> $ => return 0; </k> if n<N
	{
		fibo(n);
		return 0;
	}

