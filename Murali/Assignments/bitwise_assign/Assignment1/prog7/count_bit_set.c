int count_bit_clear(unsigned int number)
{
	int count = 0;
	int size = (sizeof(number)*8);
	
	return  size - (count_bit_set(number));
}
