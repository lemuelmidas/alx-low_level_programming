#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>

unsigned int bin_to_uint(const char *b);
void output_binary(unsigned long int n);
void _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int bit_to_zero(unsigned long int *n, unsigned int index);
unsigned int bits_flipper(unsigned long int n, unsigned long int m);
int check_endianness(void);
#endif /* _HOLBERTON_H_ */
