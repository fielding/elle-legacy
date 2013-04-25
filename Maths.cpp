//
//  Math.cpp
//  Tetris
//
//  Created by Fielding Johnston on 4/13/13.
//  Copyright (c) 2013 Fielding Johnston. All rights reserved.
//

#include "Maths.h"

double Maths::round( double number )
{
  return number < 0.0 ? ceil(number - 0.5) : floor(number + 0.5);
}