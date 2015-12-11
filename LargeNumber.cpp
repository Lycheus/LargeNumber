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
#include <cstdlib>

using std::cout;
using std::endl;

LargeNumber::LargeNumber()
{
  value.push_back(0);
  length = 1;
}

LargeNumber::LargeNumber(const string in_num)
{
  // initialize the length of the string
  length = in_num.length();

  /*
    The input of the user is "3012", we'll put them in reverse order.
    Thus in the vector<int> the data will be:
    vector[0] = 2;
    vector[1] = 1;
    vector[2] = 0;
    vector[3] = 3;
    This will make later calculation easier
   */
  for (int i = length-1; i >= 0; i--)
    value.push_back(in_num[i]-48); // In ASCII, char 0-9 are store in decimal form 48~57
}

LargeNumber::~LargeNumber()
{
  // We don't need to delete the local variable value because this is in stack not heap memory
  //delete value;
}

void LargeNumber::print()
{
  for (std::vector<int>::reverse_iterator rit=value.rbegin(); rit != value.rend(); ++rit)
    cout << *rit;
  cout << endl;
}

LargeNumber& LargeNumber::operator= (const LargeNumber& c)
{
  value = c.value;
  return *this;
}
/*
// X + Y
LargeNumber operator+ (const LargeNumber& x, const LargeNumber& y)
{
  // Fetch iterator for X and Y
  std::vector<int>::const_iterator itx=x.value.begin();
  std::vector<int>::const_iterator itb=y.value.begin();

  //Deciding the leading length
  int length 

  //Do addition digit by digit
  

  return LargeNumber("1024");
  
}
*/
/*
LargeNumber LargeNumber::operator++ (LargeNumber)
{
}
*/
