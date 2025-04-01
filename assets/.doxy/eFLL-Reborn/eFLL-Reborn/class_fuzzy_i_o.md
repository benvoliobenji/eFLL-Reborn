

# Class FuzzyIO



[**ClassList**](annotated.md) **>** [**FuzzyIO**](class_fuzzy_i_o.md)



_Class to manage fuzzy inputs and outputs. Base class for_ [_**FuzzyInput**_](class_fuzzy_input.md) _and_[_**FuzzyOutput**_](class_fuzzy_output.md) _._

* `#include <FuzzyIO.h>`





Inherited by the following classes: [FuzzyInput](class_fuzzy_input.md),  [FuzzyOutput](class_fuzzy_output.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FuzzyIO**](#function-fuzzyio-12) () <br>_Default constructor._  |
|   | [**FuzzyIO**](#function-fuzzyio-22) (int index) <br>_Construct a new_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object with a provided index._ |
|  bool | [**addFuzzySet**](#function-addfuzzyset) ([**FuzzySet**](class_fuzzy_set.md) \* fuzzySet) <br>_Add a new_ [_**FuzzySet**_](class_fuzzy_set.md) _to the_[_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
|  float | [**getCrispInput**](#function-getcrispinput) () <br>_Get the value of the crisp input for this_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
|  int | [**getIndex**](#function-getindex) () <br>_Get the current index of the_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
|  void | [**resetFuzzySets**](#function-resetfuzzysets) () <br>_Resets all fuzzy sets._  |
|  void | [**setCrispInput**](#function-setcrispinput) (float crispInput) <br>_Set the value of the crisp input for this_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
|   | [**~FuzzyIO**](#function-fuzzyio) () <br>_Default destructor._  |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  float | [**crispInput**](#variable-crispinput)  <br>_The crisp input value for the_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
|  [**fuzzySetArray**](structfuzzy_set_array.md) \* | [**fuzzySets**](#variable-fuzzysets)  <br>_Linked list of_ [_**FuzzySet**_](class_fuzzy_set.md) _objects._ |
|  int | [**index**](#variable-index)  <br>_The index of the_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|  void | [**cleanFuzzySets**](#function-cleanfuzzysets) ([**fuzzySetArray**](structfuzzy_set_array.md) \* aux) <br>_Recursively clean all_ [_**FuzzySet**_](class_fuzzy_set.md) _structs from memory._ |




## Public Functions Documentation




### function FuzzyIO [1/2]

_Default constructor._ 
```C++
FuzzyIO::FuzzyIO () 
```




<hr>



### function FuzzyIO [2/2]

_Construct a new_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object with a provided index._
```C++
FuzzyIO::FuzzyIO (
    int index
) 
```





**Parameters:**


* `index` The index of the [**FuzzyIO**](class_fuzzy_i_o.md) object. 




        

<hr>



### function addFuzzySet 

_Add a new_ [_**FuzzySet**_](class_fuzzy_set.md) _to the_[_**FuzzyIO**_](class_fuzzy_i_o.md) _object._
```C++
bool FuzzyIO::addFuzzySet (
    FuzzySet * fuzzySet
) 
```





**Note:**

will malloc a new [**fuzzySetArray**](structfuzzy_set_array.md) struct and add it to the linked list of fuzzySets. Uses the provided pointer to the [**FuzzySet**](class_fuzzy_set.md) object as the fuzzySet member of the new [**fuzzySetArray**](structfuzzy_set_array.md) struct.




**Parameters:**


* `fuzzySet` Pointer to the [**FuzzySet**](class_fuzzy_set.md) object to add to the [**FuzzyIO**](class_fuzzy_i_o.md) object. 



**Return value:**


* `true` if the [**FuzzySet**](class_fuzzy_set.md) was added successfully. 
* `false` if the [**FuzzySet**](class_fuzzy_set.md) could not be added or memory could not be allocated to add the new set. 




        

<hr>



### function getCrispInput 

_Get the value of the crisp input for this_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._
```C++
float FuzzyIO::getCrispInput () 
```





**Returns:**

float the crisp input value. 





        

<hr>



### function getIndex 

_Get the current index of the_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._
```C++
int FuzzyIO::getIndex () 
```





**Returns:**

int the index of the [**FuzzyIO**](class_fuzzy_i_o.md) object. 





        

<hr>



### function resetFuzzySets 

_Resets all fuzzy sets._ 
```C++
void FuzzyIO::resetFuzzySets () 
```





**Returns:**

true always returns true. 





        

<hr>



### function setCrispInput 

_Set the value of the crisp input for this_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._
```C++
void FuzzyIO::setCrispInput (
    float crispInput
) 
```





**Parameters:**


* `crispInput` The crisp input value to set. 




        

<hr>



### function ~FuzzyIO 

_Default destructor._ 
```C++
FuzzyIO::~FuzzyIO () 
```




<hr>
## Protected Attributes Documentation




### variable crispInput 

_The crisp input value for the_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._
```C++
float FuzzyIO::crispInput;
```




<hr>



### variable fuzzySets 

_Linked list of_ [_**FuzzySet**_](class_fuzzy_set.md) _objects._
```C++
fuzzySetArray* FuzzyIO::fuzzySets;
```




<hr>



### variable index 

_The index of the_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._
```C++
int FuzzyIO::index;
```




<hr>
## Protected Functions Documentation




### function cleanFuzzySets 

_Recursively clean all_ [_**FuzzySet**_](class_fuzzy_set.md) _structs from memory._
```C++
void FuzzyIO::cleanFuzzySets (
    fuzzySetArray * aux
) 
```





**Parameters:**


* `aux` Pointer to the first [**FuzzySet**](class_fuzzy_set.md) struct in the linked list to clean up. 




        

<hr>

------------------------------
The documentation for this class was generated from the following file `include/eFLL/FuzzyIO.h`

