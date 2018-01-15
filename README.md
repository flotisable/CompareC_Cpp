# CompareC_Cpp
  a simple project to compare the run time of C and C++
# Current Test
  compare
  - the printf
  - cout
  - cout without synchronize to stdio

  some option
  - test compiler:  g++, clang
  - test flag    :  -O1, -O2, -O3
  - print string : "", "abcdefg"
# How To Run The Test
  ```
  make logToTable
  chmod u+x test.sh logToTable.sh
  ./logTable.sh
  ```
  this will generate 8 tables with the following meaning
  1. compiled by g++ without any flags
  2. compiled by g++ -O1
  3. compiled by g++ -O2
  4. compiled by g++ -O3
  5. compiled by clang without any flags
  6. compiled by clang -O1
  7. compiled by clang -O2
  8. compiled by clang -O3