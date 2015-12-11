#include "LargeNumber.h"
//#include <iostream>

int main()
{
  LargeNumber LN0;
  //LN0.print();  

  LargeNumber LNa("593041894948498498498489498411241231232311135211369211396184239812432");
  LargeNumber LNb("5198498198198114894894984094890189189498495894695498498198498");

  LargeNumber LNx;
  LNx = LNb;
  LNx = LNa + LNb; //13310, 103310
  LNx.print();

  return 0;
}
