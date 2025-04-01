

# File FuzzyInput.h

[**File List**](files.md) **>** [**eFLL**](dir_26fb29e3dc7aa006416ef68260f1131f.md) **>** [**FuzzyInput.h**](_fuzzy_input_8h.md)

[Go to the documentation of this file](_fuzzy_input_8h.md)


```C++
/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyInput.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYINPUT_H
#define FUZZYINPUT_H

// IMPORTING NECESSARY LIBRARIES
#include "FuzzyIO.h"

class FuzzyInput : public FuzzyIO
{
  public:
    FuzzyInput();

    FuzzyInput(int index);

    ~FuzzyInput();

    bool calculateFuzzySetPertinences();
};
#endif
```


