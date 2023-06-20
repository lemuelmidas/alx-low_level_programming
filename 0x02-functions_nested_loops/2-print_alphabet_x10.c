#include "main.h"

/**
 * function that prints 10 times the alphabet, 
 *         in lowercase, followed by a new line.
 * Return: nothing
 */
void print_alphabet_10(void)
{
  char a;
  int b;

  for (b=0, b<10, b++)
  {
    
          for (a = 'a'; a<= 'z'; a++)
                  _putchar(a);
          _putchar("\n");
    
  }

}
