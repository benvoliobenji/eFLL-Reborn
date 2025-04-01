

# Class FuzzyRuleConsequent



[**ClassList**](annotated.md) **>** [**FuzzyRuleConsequent**](class_fuzzy_rule_consequent.md)



_Class to manage the consequent of a fuzzy rule._ 

* `#include <FuzzyRuleConsequent.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FuzzyRuleConsequent**](#function-fuzzyruleconsequent) () <br>_Default constructor._  |
|  bool | [**addOutput**](#function-addoutput) ([**FuzzySet**](class_fuzzy_set.md) \* fuzzySet) <br>_Add a new_ [_**FuzzySet**_](class_fuzzy_set.md) _(for Output) into_[_**FuzzyRuleConsequent**_](class_fuzzy_rule_consequent.md) _._ |
|  bool | [**evaluate**](#function-evaluate) (float power) <br>_Set the pertinence of this consequent (how much the fired rule will affect the output)_  |
|   | [**~FuzzyRuleConsequent**](#function-fuzzyruleconsequent) () <br>_Default destructor._  |




























## Public Functions Documentation




### function FuzzyRuleConsequent 

_Default constructor._ 
```C++
FuzzyRuleConsequent::FuzzyRuleConsequent () 
```




<hr>



### function addOutput 

_Add a new_ [_**FuzzySet**_](class_fuzzy_set.md) _(for Output) into_[_**FuzzyRuleConsequent**_](class_fuzzy_rule_consequent.md) _._
```C++
bool FuzzyRuleConsequent::addOutput (
    FuzzySet * fuzzySet
) 
```





**Note:**

Will malloc a new [**fuzzySetOutputArray**](structfuzzy_set_output_array.md) struct and add it to the linked list of FuzzySets. Uses the provided [**FuzzySet**](class_fuzzy_set.md) to populate the new [**fuzzySetOutputArray**](structfuzzy_set_output_array.md) struct.




**Parameters:**


* `fuzzySet` The [**FuzzySet**](class_fuzzy_set.md) to add to the [**FuzzyRuleConsequent**](class_fuzzy_rule_consequent.md). 



**Return value:**


* `true` if the [**FuzzySet**](class_fuzzy_set.md) was added successfully. 
* `false` if the [**FuzzySet**](class_fuzzy_set.md) could not be added or memory could not be allocated to add the new [**FuzzySet**](class_fuzzy_set.md). 




        

<hr>



### function evaluate 

_Set the pertinence of this consequent (how much the fired rule will affect the output)_ 
```C++
bool FuzzyRuleConsequent::evaluate (
    float power
) 
```





**Parameters:**


* `power` The pertinence of this consequent. 



**Returns:**

true always returns true. 





        

<hr>



### function ~FuzzyRuleConsequent 

_Default destructor._ 
```C++
FuzzyRuleConsequent::~FuzzyRuleConsequent () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `include/eFLL/FuzzyRuleConsequent.h`

