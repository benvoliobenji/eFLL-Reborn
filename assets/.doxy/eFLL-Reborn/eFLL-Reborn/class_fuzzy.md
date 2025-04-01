

# Class Fuzzy



[**ClassList**](annotated.md) **>** [**Fuzzy**](class_fuzzy.md)



_The main class of the eFLL library. This class is responsible for managing the fuzzy logic system. From adding inputs and outputs to the system, to defining rules and calculating the output._ 

* `#include <Fuzzy.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Fuzzy**](#function-fuzzy) () <br>_Default constructor._  |
|  bool | [**addFuzzyInput**](#function-addfuzzyinput) ([**FuzzyInput**](class_fuzzy_input.md) \* fuzzyInput) <br>_Add a new_ [_**FuzzyInput**_](class_fuzzy_input.md) _to the fuzzy logic system._ |
|  bool | [**addFuzzyOutput**](#function-addfuzzyoutput) ([**FuzzyOutput**](class_fuzzy_output.md) \* fuzzyOutput) <br>_Add a new_ [_**FuzzyOutput**_](class_fuzzy_output.md) _to the fuzzy logic system._ |
|  bool | [**addFuzzyRule**](#function-addfuzzyrule) ([**FuzzyRule**](class_fuzzy_rule.md) \* fuzzyRule) <br>_Add a new_ [_**FuzzyRule**_](class_fuzzy_rule.md) _to the fuzzy logic system._ |
|  float | [**defuzzify**](#function-defuzzify) (int fuzzyOutputIndex) <br>_Defuzzify the output of a_ [_**FuzzyOutput**_](class_fuzzy_output.md) _at the provided index._ |
|  bool | [**fuzzify**](#function-fuzzify) () <br>_Calculate and store the result of a fuzzification for each_ [_**FuzzyOutput**_](class_fuzzy_output.md) _given the current crisp values of the FuzzyInputs and the rules provided to the system._ |
|  bool | [**isFiredRule**](#function-isfiredrule) (int fuzzyRuleIndex) <br>_Check if the_ [_**FuzzyRule**_](class_fuzzy_rule.md) _at the provided index was triggered durring fuzzification._ |
|  bool | [**setInput**](#function-setinput) (int fuzzyInputIndex, float crispValue) <br>_Set the crisp value of the_ [_**FuzzyInput**_](class_fuzzy_input.md) _at the provided index. The crisp value is the value that the_[_**FuzzyInput**_](class_fuzzy_input.md) _will be evaluated against to determine the pertinence of the FuzzySets in the input._ |
|   | [**~Fuzzy**](#function-fuzzy) () <br>_Default destructor._  |




























## Public Functions Documentation




### function Fuzzy 

_Default constructor._ 
```C++
Fuzzy::Fuzzy () 
```




<hr>



### function addFuzzyInput 

_Add a new_ [_**FuzzyInput**_](class_fuzzy_input.md) _to the fuzzy logic system._
```C++
bool Fuzzy::addFuzzyInput (
    FuzzyInput * fuzzyInput
) 
```





**Note:**

will malloc a new [**fuzzyInputArray**](structfuzzy_input_array.md) struct and add it to the linked list of fuzzyInputs. Uses the provided pointer to the [**FuzzyInput**](class_fuzzy_input.md) object as the fuzzyInput member of the new [**fuzzyInputArray**](structfuzzy_input_array.md) struct.




**Parameters:**


* `fuzzyInput` Pointer to the [**FuzzyInput**](class_fuzzy_input.md) object to add to the system. 



**Return value:**


* `true` if the [**FuzzyInput**](class_fuzzy_input.md) was added successfully. 
* `false` if the [**FuzzyInput**](class_fuzzy_input.md) could not be added or memory could not be allocated to add the new input. 




        

<hr>



### function addFuzzyOutput 

_Add a new_ [_**FuzzyOutput**_](class_fuzzy_output.md) _to the fuzzy logic system._
```C++
bool Fuzzy::addFuzzyOutput (
    FuzzyOutput * fuzzyOutput
) 
```





**Note:**

will malloc a new [**fuzzyOutputArray**](structfuzzy_output_array.md) struct and add it to the linked list of fuzzyOutputs. Uses the provided pointer to the [**FuzzyOutput**](class_fuzzy_output.md) object as the fuzzyOutput member of the new [**fuzzyOutputArray**](structfuzzy_output_array.md) struct.




**Parameters:**


* `fuzzyOutput` Pointer to the [**FuzzyOutput**](class_fuzzy_output.md) object to add to the system. 



**Return value:**


* `true` if the [**FuzzyOutput**](class_fuzzy_output.md) was added successfully. 
* `false` if the [**FuzzyOutput**](class_fuzzy_output.md) could not be added or memory could not be allocated to add the new output. 




        

<hr>



### function addFuzzyRule 

_Add a new_ [_**FuzzyRule**_](class_fuzzy_rule.md) _to the fuzzy logic system._
```C++
bool Fuzzy::addFuzzyRule (
    FuzzyRule * fuzzyRule
) 
```





**Note:**

will malloc a new [**fuzzyRuleArray**](structfuzzy_rule_array.md) struct and add it to the linked list of fuzzyRules. Uses the provided pointer to the [**FuzzyRule**](class_fuzzy_rule.md) object as the fuzzyRule member of the new [**fuzzyRuleArray**](structfuzzy_rule_array.md) struct.




**Parameters:**


* `fuzzyRule` Pointer to the [**FuzzyRule**](class_fuzzy_rule.md) object to add to the system. 



**Return value:**


* `true` if the [**FuzzyRule**](class_fuzzy_rule.md) was added successfully. 
* `false` if the [**FuzzyRule**](class_fuzzy_rule.md) could not be added or memory could not be allocated to add the new rule. 




        

<hr>



### function defuzzify 

_Defuzzify the output of a_ [_**FuzzyOutput**_](class_fuzzy_output.md) _at the provided index._
```C++
float Fuzzy::defuzzify (
    int fuzzyOutputIndex
) 
```





**Parameters:**


* `fuzzyOutputIndex` Index of the [**FuzzyOutput**](class_fuzzy_output.md) to defuzzify. 



**Returns:**

float The result of fuzzification for that [**FuzzyOutput**](class_fuzzy_output.md). 





        

<hr>



### function fuzzify 

_Calculate and store the result of a fuzzification for each_ [_**FuzzyOutput**_](class_fuzzy_output.md) _given the current crisp values of the FuzzyInputs and the rules provided to the system._
```C++
bool Fuzzy::fuzzify () 
```





**Returns:**

true will always return true. 





        

<hr>



### function isFiredRule 

_Check if the_ [_**FuzzyRule**_](class_fuzzy_rule.md) _at the provided index was triggered durring fuzzification._
```C++
bool Fuzzy::isFiredRule (
    int fuzzyRuleIndex
) 
```





**Parameters:**


* `fuzzyRuleIndex` Index of the [**FuzzyRule**](class_fuzzy_rule.md) to check. 



**Return value:**


* `true` if the [**FuzzyRule**](class_fuzzy_rule.md) was triggered. 
* `false` if the [**FuzzyRule**](class_fuzzy_rule.md) was not triggered. 




        

<hr>



### function setInput 

_Set the crisp value of the_ [_**FuzzyInput**_](class_fuzzy_input.md) _at the provided index. The crisp value is the value that the_[_**FuzzyInput**_](class_fuzzy_input.md) _will be evaluated against to determine the pertinence of the FuzzySets in the input._
```C++
bool Fuzzy::setInput (
    int fuzzyInputIndex,
    float crispValue
) 
```





**Parameters:**


* `fuzzyInputIndex` Index of the [**FuzzyInput**](class_fuzzy_input.md) to set the crisp value for. 
* `crispValue` The crisp value to set for the [**FuzzyInput**](class_fuzzy_input.md). 



**Return value:**


* `true` if the crisp value was set successfully. 
* `false` if the [**FuzzyInput**](class_fuzzy_input.md) at the provided index could not be found. 




        

<hr>



### function ~Fuzzy 

_Default destructor._ 
```C++
Fuzzy::~Fuzzy () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `include/eFLL/Fuzzy.h`

