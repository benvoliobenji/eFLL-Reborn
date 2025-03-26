# Usage

While the detailed API documentation can be found under the API tab, here are a
few pointers.

## Brief Overview

![Class Diagram](./uml/class-diagram.png)

**Fuzzy object** - This object includes all the Fuzzy System, through it, you
can manipulate the Fuzzy Sets, Linguistic Rules, inputs and outputs.

**FuzzyInput** object - This object groups all entries Fuzzy Sets that belongs
to the same domain.

**FuzzyOutput** object - This object is similar to FuzzyInput, is used to group
all output Fuzzy Sets thar belongs to the same domain.

**FuzzySet** object - This is one of the main objects of Fuzzy Library, with
each set is possible to model the system in question. Currently the library
supports triangular membership functions, trapezoidal and singleton, which are
assembled based on points A, B, C and D, they are passed by parameter in its
constructor FuzzySet(float a, float b, float c, float d).

**FuzzyRule** object - This object is used to mount the base rule of Fuzzy
object, which contains one or more of this object. Instantiated with FuzzyRule
fr = new FuzzyRule (ID, antecedent, consequent).

**FuzzyRuleAntecedent** object - This object is used to compound the object
FuzzyRule, responsible for assembling the antecedent of the conditional
expression of a FuzzyRule.

**FuzzyRuleConsequent** object - This object is used to render the object
FuzzyRule, responsible for assembling the output expression of a FuzzyRule.

## Tips

These are all eFLL library objects that are used in the process. The next step,
generally interactive is handled by three methods of the Fuzzy Class first:

`bool setInput(int id, float value);`

It is used to pass the Crispe input value to the system note that the first
parameter is the FuzzyInput object' ID which parameter value is intended.

`bool fuzzify();`

It is used to start the fuzzification process, composition and inference.

And finally:

`float defuzzify(int id);`
