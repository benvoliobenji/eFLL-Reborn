

# Class FuzzyRuleAntecedent



[**ClassList**](annotated.md) **>** [**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md)



_Class to manage the antecedent of a fuzzy rule._ 

* `#include <FuzzyRuleAntecedent.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FuzzyRuleAntecedent**](#function-fuzzyruleantecedent) () <br>_Default constructor._  |
|  float | [**evaluate**](#function-evaluate) () <br>_Calculates the pertinence of the antecedent._  |
|  bool | [**joinSingle**](#function-joinsingle) ([**FuzzySet**](class_fuzzy_set.md) \* fuzzySet) <br>_Create an antecedent with only one set._  |
|  bool | [**joinWithAND**](#function-joinwithand-14) ([**FuzzySet**](class_fuzzy_set.md) \* fuzzySet1, [**FuzzySet**](class_fuzzy_set.md) \* fuzzySet2) <br>_Create an antecedent with two sets joined by an AND operator._  |
|  bool | [**joinWithAND**](#function-joinwithand-24) ([**FuzzySet**](class_fuzzy_set.md) \* fuzzySet, [**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) \* fuzzyRuleAntecedent) <br>_Create an antecedent with one set and one antecedent joined by an AND operator._  |
|  bool | [**joinWithAND**](#function-joinwithand-34) ([**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) \* fuzzyRuleAntecedent, [**FuzzySet**](class_fuzzy_set.md) \* fuzzySet) <br> |
|  bool | [**joinWithAND**](#function-joinwithand-44) ([**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) \* fuzzyRuleAntecedent1, [**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) \* fuzzyRuleAntecedent2) <br>_Create an antecedent with two antecedents joined by an AND operator._  |
|  bool | [**joinWithOR**](#function-joinwithor-14) ([**FuzzySet**](class_fuzzy_set.md) \* fuzzySet1, [**FuzzySet**](class_fuzzy_set.md) \* fuzzySet2) <br>_Create an antecedent with two sets joined by an OR operator._  |
|  bool | [**joinWithOR**](#function-joinwithor-24) ([**FuzzySet**](class_fuzzy_set.md) \* fuzzySet, [**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) \* fuzzyRuleAntecedent) <br>_Create an antecedent with one set and one antecedent joined by an OR operator._  |
|  bool | [**joinWithOR**](#function-joinwithor-34) ([**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) \* fuzzyRuleAntecedent, [**FuzzySet**](class_fuzzy_set.md) \* fuzzySet) <br> |
|  bool | [**joinWithOR**](#function-joinwithor-44) ([**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) \* fuzzyRuleAntecedent1, [**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) \* fuzzyRuleAntecedent2) <br>_Create an antecedent with two antecedents joined by an OR operator._  |




























## Public Functions Documentation




### function FuzzyRuleAntecedent 

_Default constructor._ 
```C++
FuzzyRuleAntecedent::FuzzyRuleAntecedent () 
```




<hr>



### function evaluate 

_Calculates the pertinence of the antecedent._ 
```C++
float FuzzyRuleAntecedent::evaluate () 
```





**Note:**

Relies on underlying FuzzySets to have their pertinence calculated first.




**Returns:**

float The pertinence of the antecedent. 





        

<hr>



### function joinSingle 

_Create an antecedent with only one set._ 
```C++
bool FuzzyRuleAntecedent::joinSingle (
    FuzzySet * fuzzySet
) 
```





**Note:**

Example result would be "IF (COLD)"




**Parameters:**


* `fuzzySet` The fuzzy set to add. 



**Return value:**


* `true` if the [**FuzzySet**](class_fuzzy_set.md) was added successfully. 
* `false` if the [**FuzzySet**](class_fuzzy_set.md) could not be added or was not valid. 




        

<hr>



### function joinWithAND [1/4]

_Create an antecedent with two sets joined by an AND operator._ 
```C++
bool FuzzyRuleAntecedent::joinWithAND (
    FuzzySet * fuzzySet1,
    FuzzySet * fuzzySet2
) 
```





**Note:**

Example result would be "IF (COLD) AND (WINDY)"




**Parameters:**


* `fuzzySet1` The first fuzzy set to add. 
* `fuzzySet2` The second fuzzy set to add. 



**Return value:**


* `true` if the FuzzySets were added successfully. 
* `false` if the FuzzySets could not be added or either were not valid. 




        

<hr>



### function joinWithAND [2/4]

_Create an antecedent with one set and one antecedent joined by an AND operator._ 
```C++
bool FuzzyRuleAntecedent::joinWithAND (
    FuzzySet * fuzzySet,
    FuzzyRuleAntecedent * fuzzyRuleAntecedent
) 
```





**Note:**

Example result would be "IF (COLD) AND (IF WINDY AND RAINY)"




**Parameters:**


* `fuzzySet` The fuzzy set to add. 
* `fuzzyRuleAntecedent` The antecedent to add. 



**Return value:**


* `true` if the [**FuzzySet**](class_fuzzy_set.md) and [**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) were added successfully. 



**Returns:**

false if the [**FuzzySet**](class_fuzzy_set.md) or [**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) could not be added or were not valid. 





        

<hr>



### function joinWithAND [3/4]

```C++
bool FuzzyRuleAntecedent::joinWithAND (
    FuzzyRuleAntecedent * fuzzyRuleAntecedent,
    FuzzySet * fuzzySet
) 
```



[**Same as above but inverted**](class_fuzzy_rule_antecedent.md#function-joinwithand-24) 


        

<hr>



### function joinWithAND [4/4]

_Create an antecedent with two antecedents joined by an AND operator._ 
```C++
bool FuzzyRuleAntecedent::joinWithAND (
    FuzzyRuleAntecedent * fuzzyRuleAntecedent1,
    FuzzyRuleAntecedent * fuzzyRuleAntecedent2
) 
```





**Note:**

Example result would be "IF (IF COLD AND WINDY) AND (IF WINDY AND RAINY)"




**Parameters:**


* `fuzzyRuleAntecedent1` The first antecedent to add. 
* `fuzzyRuleAntecedent2` The second antecedent to add. 



**Return value:**


* `true` if the FuzzyRuleAntecedents were added successfully. 



**Returns:**

false if the FuzzyRuleAntecedents could not be added or were not valid. 





        

<hr>



### function joinWithOR [1/4]

_Create an antecedent with two sets joined by an OR operator._ 
```C++
bool FuzzyRuleAntecedent::joinWithOR (
    FuzzySet * fuzzySet1,
    FuzzySet * fuzzySet2
) 
```





**Note:**

Example result would be "IF (COLD) OR (WINDY)"




**Parameters:**


* `fuzzySet1` The first fuzzy set to add. 
* `fuzzySet2` The second fuzzy set to add. 



**Return value:**


* `true` if the FuzzySets were added successfully. 
* `false` if the FuzzySets could not be added or either were not valid. 




        

<hr>



### function joinWithOR [2/4]

_Create an antecedent with one set and one antecedent joined by an OR operator._ 
```C++
bool FuzzyRuleAntecedent::joinWithOR (
    FuzzySet * fuzzySet,
    FuzzyRuleAntecedent * fuzzyRuleAntecedent
) 
```





**Note:**

Example result would be "IF (COLD) OR (IF WINDY AND RAINY)"




**Parameters:**


* `fuzzySet` The fuzzy set to add. 
* `fuzzyRuleAntecedent` The antecedent to add. 



**Return value:**


* `true` if the [**FuzzySet**](class_fuzzy_set.md) and [**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) were added successfully. 



**Returns:**

false if the [**FuzzySet**](class_fuzzy_set.md) or [**FuzzyRuleAntecedent**](class_fuzzy_rule_antecedent.md) could not be added or were not valid. 





        

<hr>



### function joinWithOR [3/4]

```C++
bool FuzzyRuleAntecedent::joinWithOR (
    FuzzyRuleAntecedent * fuzzyRuleAntecedent,
    FuzzySet * fuzzySet
) 
```



[**Same as above but inverted**](class_fuzzy_rule_antecedent.md#function-joinwithor-24) 


        

<hr>



### function joinWithOR [4/4]

_Create an antecedent with two antecedents joined by an OR operator._ 
```C++
bool FuzzyRuleAntecedent::joinWithOR (
    FuzzyRuleAntecedent * fuzzyRuleAntecedent1,
    FuzzyRuleAntecedent * fuzzyRuleAntecedent2
) 
```





**Note:**

Example result would be "IF (IF COLD AND WINDY) OR (IF WINDY AND RAINY)"




**Parameters:**


* `fuzzyRuleAntecedent1` The first antecedent to add. 
* `fuzzyRuleAntecedent2` The second antecedent to add. 



**Return value:**


* `true` if the FuzzyRuleAntecedents were added successfully. 
* `false` if the FuzzyRuleAntecedents could not be added or were not valid. 




        

<hr>

------------------------------
The documentation for this class was generated from the following file `include/eFLL/FuzzyRuleAntecedent.h`

