int setbits(int x, int y, int n, int p )
{
///	x = 
x = (~((((1 << n) - 1)) <<  ((p - n) + 1)) & x) | ( ( ( (1 << n) - 1) & y) << ((p - n) + 1));
							
return x;

}
