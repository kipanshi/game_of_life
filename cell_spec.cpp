#include <igloo/igloo_alt.h>
using namespace igloo;

#include "cell.h"

Describe(A_Cell)
{
  It(Should_have_coordinates)
  {
    Cell cell(3, 4);
  }
};

