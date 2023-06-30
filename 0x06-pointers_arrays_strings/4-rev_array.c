/**
 * reverse_array - to reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: null
 */
void reverse_array(int *a, int n)
{
	int p = 0;
	int temp;

	while (p < n--)
	{
		temp = a[p];
		a[p++] = a[n];
		a[n] = temp;
	}
}
