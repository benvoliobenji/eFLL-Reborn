

# File FuzzyOutput.h

[**File List**](files.md) **>** [**eFLL**](dir_26fb29e3dc7aa006416ef68260f1131f.md) **>** [**FuzzyOutput.h**](_fuzzy_output_8h.md)

[Go to the documentation of this file](_fuzzy_output_8h.md)


```C++
/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyOutput.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYOUTPUT_H
#define FUZZYOUTPUT_H

// IMPORTING NECESSARY LIBRARIES
#include "FuzzyComposition.h"
#include "FuzzyIO.h"

class FuzzyOutput : public FuzzyIO
{
  public:
    FuzzyOutput();

    FuzzyOutput(int index);

    ~FuzzyOutput();

    bool truncate();

    float getCrispOutput();


    bool order();

    FuzzyComposition* getFuzzyComposition();

  private:
    FuzzyComposition* fuzzyComposition;

    bool swap(fuzzySetArray* fuzzySetA, fuzzySetArray* fuzzySetB);

    bool rebuild(float x1,
                 float y1,
                 float x2,
                 float y2,
                 float x3,
                 float y3,
                 float x4,
                 float y4,
                 float* point,
                 float* pertinence);
};
#endif
```


