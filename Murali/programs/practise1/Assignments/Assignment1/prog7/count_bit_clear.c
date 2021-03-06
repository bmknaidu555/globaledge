int count_bit_set(unsigned int number)
{
	int count = 0;
	int size = (((sizeof(number))*8)-1);
	
	while(size-->=0)
	{
		count = count + ((number >> size) & 1);
	}
	
	return count;	
}
