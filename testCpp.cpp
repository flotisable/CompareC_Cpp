#include <iostream>
#include <string>
using namespace std;

int main( int argc, char *argv[] )
{
  int     times       = 10000;
  string  printString = "";

#ifdef IOS_UNSYNC
  ios_base::sync_with_stdio( false );
#endif

  switch( argc )
  {
    case 3:

      printString = argv[2];

    case 2:

      times = stoi( argv[1] );
      break;
  }

  for( int i = 0 ; i < times ; ++i )
     cout << printString;

  return 0;
}
