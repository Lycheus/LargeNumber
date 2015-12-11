/*****************************
$Author: Kenny Dow
$Revision: 1.00
$Start date: 2014-09-23
$Last update: 2014-12-08

$Description:
A math lib for large number arithmatic.
1. add(): addition
2. mul(): multiply
3. fact(): factorial

TODO:

*****************************/
#include "LargeNumber.h"
#include <iostream>

using std::cout;
using std::endl;

LargeNumber::LargeNumber()
{
  value.push_back(0);
  length = 1;
}

LargeNumber::LargeNumber(const char* in_num)
{
  /*
  value = (short*)malloc(sizeof(short)*strlen(in_num));

  for (unsigned int i=0; i<=strlen(in_num); i++)
    {
      value[i] = atoi(&in_num[i]) & 0x000000FF;
      length++;
      cout << in_num[i];
    }
  cout << value[1] << endl;
  */
}

void LargeNumber::print()
{
  for (std::vector<int>::iterator it=value.begin(); it != value.end(); it++)
    cout << *it;
  cout << endl;

  /*
  for (int i=length-1; i>=0; i--)
      cout << value[i];
  cout << std::endl;
  */
}
    
LargeNumber::~LargeNumber()
{
  //delete value;
}
