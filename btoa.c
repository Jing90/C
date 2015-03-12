#include <stdio.h>
/*
** accept an int value(unsigned), change to char and print 
*/
void binary_to_ascii( unsigned int value )
{
  unsigned int quotient;
  
  quotient = value / 10;
  if( quotient != 0 )
    binary_to_ascii( quoeient );
    
  putchar( value % 10 + '0' );
}
