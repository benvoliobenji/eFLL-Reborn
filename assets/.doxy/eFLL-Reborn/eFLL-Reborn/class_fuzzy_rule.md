

# Class FuzzyRule



[**ClassList**](annotated.md) **>** [**FuzzyRule**](class_fuzzy_rule.md)



_Class to manage fuzzy rules._ 

* `#include <FuzzyRule.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FuzzyRule**](#function-fuzzyrule-12) () <br>_Default constructor._  |
|   | [**FuzzyRule**](#function-fuzzyrule-22) (int index, [**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) \* fuzzyRuleAntecedent, [**FuzzyRuleConsequent**](class_fuzzy_rule_consequent.md) \* fuzzyRuleConsequent) <br>_Construct a new_ [_**Fuzzy**_](class_fuzzy.md) _Rule object with a provided index, antecedent and consequent._ |
|  bool | [**evaluateExpression**](#function-evaluateexpression) () <br>_Evaluates the rule expression given the antecedent and consequent._  |
|  int | [**getIndex**](#function-getindex) () <br>_Get the Index of the_ [_**FuzzyRule**_](class_fuzzy_rule.md) _._ |
|  bool | [**isFired**](#function-isfired) () <br>_Check to see if the rule was fired._  |




























## Public Functions Documentation




### function FuzzyRule [1/2]

_Default constructor._ 
```C++
FuzzyRule::FuzzyRule () 
```




<hr>



### function FuzzyRule [2/2]

_Construct a new_ [_**Fuzzy**_](class_fuzzy.md) _Rule object with a provided index, antecedent and consequent._
```C++
FuzzyRule::FuzzyRule (
    int index,
    FuzzyRuleAntecedent * fuzzyRuleAntecedent,
    FuzzyRuleConsequent * fuzzyRuleConsequent
) 
```





**Parameters:**


* `index` The index of the [**FuzzyRule**](class_fuzzy_rule.md) object. 
* `fuzzyRuleAntecedent` The antecedent of the [**FuzzyRule**](class_fuzzy_rule.md). 
* `fuzzyRuleConsequent` The consequent of the [**FuzzyRule**](class_fuzzy_rule.md). 




        

<hr>



### function evaluateExpression 

_Evaluates the rule expression given the antecedent and consequent._ 
```C++
bool FuzzyRule::evaluateExpression () 
```





**Return value:**


* `true` if the rule was fired. 
* `false` if the rule was not fired. 




        

<hr>



### function getIndex 

_Get the Index of the_ [_**FuzzyRule**_](class_fuzzy_rule.md) _._
```C++
int FuzzyRule::getIndex () 
```





**Returns:**

int the index of the [**FuzzyRule**](class_fuzzy_rule.md). 





        

<hr>



### function isFired 

_Check to see if the rule was fired._ 
```C++
bool FuzzyRule::isFired () 
```





**Return value:**


* `true` if the rule was fired. 
* `false` if the rule was not fired. 




        

<hr>

------------------------------
The documentation for this class was generated from the following file `include/eFLL/FuzzyRule.h`

