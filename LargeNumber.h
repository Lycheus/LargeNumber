/*****************************
$Author: Kenny Dow
$Revision: 1.00
$Start date: 2014-09-23
$Last update: 2014-09-23

$Description:
A math lib for large number arithmatic.
1. add(): addition
2. mul(): multiply
3. fact(): factorial

TODO:
                                                         
*****************************/

#ifndef __LargeNumber_h_included__
#define __LargeNumber_h_included__

#include <vector>
#include <string>

using std::string;

class LargeNumber
{
 public:
  LargeNumber();
  LargeNumber(const string);
  LargeNumber& operator=(const LargeNumber& c);
  LargeNumber& operator=(const string);

  LargeNumber add();
  LargeNumber mul();
  LargeNumber fact();
  void print();

  LargeNumber operator++();
  LargeNumber operator--();

  ~LargeNumber();

  friend LargeNumber operator+(const LargeNumber& x, const LargeNumber& y);
  friend LargeNumber operator-(const LargeNumber& x, const LargeNumber& y);
  friend LargeNumber operator*(const LargeNumber& x, const LargeNumber& y);
  
 private:
  std::vector<int> value;
  int length;
};

#endif

