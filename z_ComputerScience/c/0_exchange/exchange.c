/*This code shows a C code and equivalent assembly code
P.125 3.4.3*/

long exchange(long *xp, long y)
{
	long x = *xp;
	*xp = y;
	return x;
}

/*
exchange:
  movq	(%rdi), %rax
  movq  %rsi, (%rdi)
  ret
*/


