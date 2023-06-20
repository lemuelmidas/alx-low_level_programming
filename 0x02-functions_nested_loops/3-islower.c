#include "main.h"

/**
 * a function that checks for lowercase character
 * 
 * Return: 1, if c is lowercase,, otherwise 0
 */
int _islower(int c)
{
        char a;
        int case= 0;

        for (a='a'; a<= 'z', a++)
        {
      
            if (a==c)
                  case =1;
      
        }
  
        return case;
  
}
