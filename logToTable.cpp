#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  constexpr int rowNum = 5;
  constexpr int colNum = 6;

  vector<vector<string>> table;

  // initialize table
  table.resize( rowNum );

  for( vector<string> &row : table )
     row.resize( colNum );
  // end initialize table

  while( !cin.eof() )
  {
    for( int col = 0 ; col < colNum ; ++col )
       for( int row = 0 ; row < rowNum ; ++row )
       {
          if( row == 0 && col % 2 == 1 ) continue;

          string buffer;

          getline( cin, buffer );
          if( cin.eof() ) return 0;

          table[row][col] = buffer;
       }
    cout << "|                       | C        |             | C++      |             | C++ unsync |             |\n";
    cout << "|-----------------------+----------+-------------+----------+-------------+------------+-------------|\n";
    cout << "|                       |          | with string |          | with string |            | with string |\n";
    cout << "| default               | " << table[0][0] << " |             | " << table[0][2] << " |             | " << table[0][4] << "   |             |\n";
    cout << "| print times: 10000    | " << table[1][0] << " | " << table[1][1] << "    | " << table[1][2] << " | " << table[1][3] << "    | " << table[1][4] << "   | " << table[1][5] << "    |\n";
    cout << "| print times: 100000   | " << table[2][0] << " | " << table[2][1] << "    | " << table[2][2] << " | " << table[2][3] << "    | " << table[2][4] << "   | " << table[2][5] << "    |\n";
    cout << "| print times: 1000000  | " << table[3][0] << " | " << table[3][1] << "    | " << table[3][2] << " | " << table[3][3] << "    | " << table[3][4] << "   | " << table[3][5] << "    |\n";
    cout << "| print times: 10000000 | " << table[4][0] << " | " << table[4][1] << "    | " << table[4][2] << " | " << table[4][3] << "    | " << table[4][4] << "   | " << table[4][5] << "    |\n";
    cout << "|-----------------------+----------+-------------+----------+-------------+------------+-------------|\n";
  }

  return 0;
}
