/**
 * flip_bits - to get number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max_bit = 0x01;

	while (max_bit <= xor)
	{
		if (max_bit & xor)
			flips++;
		max_bit <<= 1;
	}
	return (flips);
}
