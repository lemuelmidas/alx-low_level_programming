/**
 * reverse_array - to reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: null
 */
void reverse_array(int *a, int n)
{
  int u = 0;
  int temp;

  while (u < n--)
    {
      temp = a[u];
      a[u++] = a[n];
      a[n] = temp;
    }
}
