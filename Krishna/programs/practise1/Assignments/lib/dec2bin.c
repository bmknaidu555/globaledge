
/* Function to convert decimal to binary */

int dec2bin(int value)
{
	int count = 32;
	while(count-- > 0)
	{
		printf("%d ",((value >> 31) & 1));
		value = value << 1 ;
	}
}
