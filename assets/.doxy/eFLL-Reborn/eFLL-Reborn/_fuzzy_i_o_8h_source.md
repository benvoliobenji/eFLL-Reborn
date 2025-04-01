

# File FuzzyIO.h

[**File List**](files.md) **>** [**eFLL**](dir_26fb29e3dc7aa006416ef68260f1131f.md) **>** [**FuzzyIO.h**](_fuzzy_i_o_8h.md)

[Go to the documentation of this file](_fuzzy_i_o_8h.md)


```C++
/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyIO.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYIO_H
#define FUZZYIO_H

// IMPORTING NECESSARY LIBRARIES
#include <stdlib.h>

#include "FuzzySet.h"

struct fuzzySetArray
{
    FuzzySet* fuzzySet;
    fuzzySetArray* next;
};

class FuzzyIO
{
  public:
    FuzzyIO();

    FuzzyIO(int index);

    ~FuzzyIO();

    int getIndex();

    void setCrispInput(float crispInput);

    float getCrispInput();

    bool addFuzzySet(FuzzySet* fuzzySet);

    void resetFuzzySets();

  protected:
    int index;
    float crispInput;
    fuzzySetArray* fuzzySets;

    void cleanFuzzySets(fuzzySetArray* aux);
};
#endif
```


