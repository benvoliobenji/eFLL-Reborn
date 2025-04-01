

# File FuzzyRule.h

[**File List**](files.md) **>** [**eFLL**](dir_26fb29e3dc7aa006416ef68260f1131f.md) **>** [**FuzzyRule.h**](_fuzzy_rule_8h.md)

[Go to the documentation of this file](_fuzzy_rule_8h.md)


```C++
/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyRule.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYRULE_H
#define FUZZYRULE_H

// IMPORTING NECESSARY LIBRARIES
#include "FuzzyRuleAntecedent.h"
#include "FuzzyRuleConsequent.h"

class FuzzyRule
{
  public:
    FuzzyRule();

    FuzzyRule(int index, FuzzyRuleAntecedent* fuzzyRuleAntecedent, FuzzyRuleConsequent* fuzzyRuleConsequent);

    int getIndex();

    bool evaluateExpression();

    bool isFired();

  private:
    int index;
    bool fired;
    FuzzyRuleAntecedent* fuzzyRuleAntecedent;
    FuzzyRuleConsequent* fuzzyRuleConsequent;
};
#endif
```


