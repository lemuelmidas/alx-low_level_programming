#include <unistd.h>

/**
 * to print _putchar
 * 
 * Return 0, if successful
 */
int main(void)
{
        char text[]= "_putchar\n";
        write(1, text, sizeof(text)-1);
        return (0);
  
}
