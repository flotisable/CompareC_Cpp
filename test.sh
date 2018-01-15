#!/bin/sh

printString="abcdefg"

timeInit=10000
timeLimit=10000000

testFunc()
{
  prog=$1

  echo "[ Test ${prog} ]"
  echo 'defult test'
  time ./${prog} > /dev/null
  echo

  for(( i=${timeInit} ; i <= ${timeLimit} ; i *= 10 )); do
  {
    echo "test print times: ${i}"
    time ./${prog} ${i} > /dev/null
    echo
  }
  done

  for(( i=${timeInit} ; i <= ${timeLimit} ; i *= 10 )); do
  {
    echo "test print with string and times: ${i}"
    time ./${prog} ${i} ${printString} > /dev/null
    echo
  }
  done
}

echo 'compile with g++'
make clean
make
testFunc testC
echo
testFunc testCpp
echo
testFunc testCppUnsync

for(( j=1 ; j <= 3 ; ++j )); do
{
  echo "compile with -O${j}"
  make clean
  make CXXFLAGS="-std=c++11 -O${j}"
  testFunc testC
  echo
  testFunc testCpp
  echo
  testFunc testCppUnsync
}
done

echo 'compile with clang++'
make clean
make CXX=clang++ LD=clang++
testFunc testC
echo
testFunc testCpp
echo
testFunc testCppUnsync

for(( j=1 ; j <= 3 ; ++j )); do
{
  echo "compile with -O${j}"
  make clean
  make CXX=clang++ LD=clang++ CXXFLAGS="-std=c++11 -O${j}"
  echo
  testFunc testC
  testFunc testCpp
  echo
  testFunc testCppUnsync
}
done
