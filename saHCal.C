#include "saHCal.h"
R__LOAD_LIBRARY(libsaHCal.so)

void saHCal(const char * filename)
{
  if ( filename != NULL)
    {
      pfileopen(filename);
      //pinit();
      prun();
      //pclose();
    }
  else cout << "no file" << endl;

}
