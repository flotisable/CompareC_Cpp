#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
  int   times           = 10000;
  char  defaultString[] = "";
  char  *printString    = defaultString;

  switch( argc )
  {
    case 3:

      printString = argv[2];

    case 2:
      
      times = atoi( argv[1] );
      break;
  }

  for( int i = 0 ; i < times ; ++i )
     printf( printString );

  return 0;
}
