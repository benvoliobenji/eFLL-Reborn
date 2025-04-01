

# File Fuzzy.h

[**File List**](files.md) **>** [**eFLL**](dir_26fb29e3dc7aa006416ef68260f1131f.md) **>** [**Fuzzy.h**](_fuzzy_8h.md)

[Go to the documentation of this file](_fuzzy_8h.md)


```C++
/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * Fuzzy.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZY_H
#define FUZZY_H

// IMPORTING NECESSARY LIBRARIES
#include <inttypes.h>

#include "FuzzyInput.h"
#include "FuzzyOutput.h"
#include "FuzzyRule.h"


struct fuzzyInputArray
{
    FuzzyInput* fuzzyInput;
    fuzzyInputArray* next;
};


struct fuzzyOutputArray
{
    FuzzyOutput* fuzzyOutput;
    fuzzyOutputArray* next;
};

struct fuzzyRuleArray
{
    FuzzyRule* fuzzyRule;
    fuzzyRuleArray* next;
};

// Main class of this library
class Fuzzy
{
  public:
    Fuzzy();

    ~Fuzzy();

    bool addFuzzyInput(FuzzyInput* fuzzyInput);

    bool addFuzzyOutput(FuzzyOutput* fuzzyOutput);

    bool addFuzzyRule(FuzzyRule* fuzzyRule);

    bool setInput(int fuzzyInputIndex, float crispValue);

    bool fuzzify();

    bool isFiredRule(int fuzzyRuleIndex);

    float defuzzify(int fuzzyOutputIndex);

  private:
    fuzzyInputArray* fuzzyInputs;
    fuzzyOutputArray* fuzzyOutputs;
    fuzzyRuleArray* fuzzyRules;

    void cleanFuzzyInputs(fuzzyInputArray* aux);

    void cleanFuzzyOutputs(fuzzyOutputArray* aux);

    void cleanFuzzyRules(fuzzyRuleArray* aux);
};
#endif
```


