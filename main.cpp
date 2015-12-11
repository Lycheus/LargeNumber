#include "LargeNumber.h"
//#include <iostream>

int main()
{
  LargeNumber LN0;
  //LN0.print();  

  LargeNumber LNa("3012");
  LargeNumber LNb("10298");

  LargeNumber LNx;
  LNx = LNb;
  //LNx = LNa + LNb;
  LNx.print();

  return 0;
}
