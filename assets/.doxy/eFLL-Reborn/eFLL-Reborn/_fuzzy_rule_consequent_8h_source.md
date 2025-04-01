

# File FuzzyRuleConsequent.h

[**File List**](files.md) **>** [**eFLL**](dir_26fb29e3dc7aa006416ef68260f1131f.md) **>** [**FuzzyRuleConsequent.h**](_fuzzy_rule_consequent_8h.md)

[Go to the documentation of this file](_fuzzy_rule_consequent_8h.md)


```C++
/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyRuleConsequent.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYRULECONSEQUENT_H
#define FUZZYRULECONSEQUENT_H

// IMPORTING NECESSARY LIBRARIES
#include <stdlib.h>

#include "FuzzySet.h"

struct fuzzySetOutputArray
{
    FuzzySet* fuzzySet;
    fuzzySetOutputArray* next;
};

class FuzzyRuleConsequent
{
  public:
    FuzzyRuleConsequent();

    ~FuzzyRuleConsequent();

    bool addOutput(FuzzySet* fuzzySet);

    bool evaluate(float power);

  private:
    fuzzySetOutputArray* fuzzySetOutputs;

    void cleanFuzzySets(fuzzySetOutputArray* aux);
};
#endif
```


