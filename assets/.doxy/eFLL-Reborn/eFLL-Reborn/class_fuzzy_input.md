

# Class FuzzyInput



[**ClassList**](annotated.md) **>** [**FuzzyInput**](class_fuzzy_input.md)



_Class to manage fuzzy inputs._ 

* `#include <FuzzyInput.h>`



Inherits the following classes: [FuzzyIO](class_fuzzy_i_o.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FuzzyInput**](#function-fuzzyinput-12) () <br>_Default constructor._  |
|   | [**FuzzyInput**](#function-fuzzyinput-22) (int index) <br>_Construct a new_ [_**Fuzzy**_](class_fuzzy.md) _Input object with a provided index._ |
|  bool | [**calculateFuzzySetPertinences**](#function-calculatefuzzysetpertinences) () <br>_Calculate the pertinence of all_ [_**FuzzySet**_](class_fuzzy_set.md) _objects in the_[_**FuzzyInput**_](class_fuzzy_input.md) _._ |
|   | [**~FuzzyInput**](#function-fuzzyinput) () <br>_Default destructor._  |


## Public Functions inherited from FuzzyIO

See [FuzzyIO](class_fuzzy_i_o.md)

| Type | Name |
| ---: | :--- |
|   | [**FuzzyIO**](class_fuzzy_i_o.md#function-fuzzyio-12) () <br>_Default constructor._  |
|   | [**FuzzyIO**](class_fuzzy_i_o.md#function-fuzzyio-22) (int index) <br>_Construct a new_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object with a provided index._ |
|  bool | [**addFuzzySet**](class_fuzzy_i_o.md#function-addfuzzyset) ([**FuzzySet**](class_fuzzy_set.md) \* fuzzySet) <br>_Add a new_ [_**FuzzySet**_](class_fuzzy_set.md) _to the_[_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
|  float | [**getCrispInput**](class_fuzzy_i_o.md#function-getcrispinput) () <br>_Get the value of the crisp input for this_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
|  int | [**getIndex**](class_fuzzy_i_o.md#function-getindex) () <br>_Get the current index of the_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
|  void | [**resetFuzzySets**](class_fuzzy_i_o.md#function-resetfuzzysets) () <br>_Resets all fuzzy sets._  |
|  void | [**setCrispInput**](class_fuzzy_i_o.md#function-setcrispinput) (float crispInput) <br>_Set the value of the crisp input for this_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
|   | [**~FuzzyIO**](class_fuzzy_i_o.md#function-fuzzyio) () <br>_Default destructor._  |
















## Protected Attributes inherited from FuzzyIO

See [FuzzyIO](class_fuzzy_i_o.md)

| Type | Name |
| ---: | :--- |
|  float | [**crispInput**](class_fuzzy_i_o.md#variable-crispinput)  <br>_The crisp input value for the_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
|  [**fuzzySetArray**](structfuzzy_set_array.md) \* | [**fuzzySets**](class_fuzzy_i_o.md#variable-fuzzysets)  <br>_Linked list of_ [_**FuzzySet**_](class_fuzzy_set.md) _objects._ |
|  int | [**index**](class_fuzzy_i_o.md#variable-index)  <br>_The index of the_ [_**FuzzyIO**_](class_fuzzy_i_o.md) _object._ |
































## Protected Functions inherited from FuzzyIO

See [FuzzyIO](class_fuzzy_i_o.md)

| Type | Name |
| ---: | :--- |
|  void | [**cleanFuzzySets**](class_fuzzy_i_o.md#function-cleanfuzzysets) ([**fuzzySetArray**](structfuzzy_set_array.md) \* aux) <br>_Recursively clean all_ [_**FuzzySet**_](class_fuzzy_set.md) _structs from memory._ |






## Public Functions Documentation




### function FuzzyInput [1/2]

_Default constructor._ 
```C++
FuzzyInput::FuzzyInput () 
```




<hr>



### function FuzzyInput [2/2]

_Construct a new_ [_**Fuzzy**_](class_fuzzy.md) _Input object with a provided index._
```C++
FuzzyInput::FuzzyInput (
    int index
) 
```





**Parameters:**


* `index` The index of the [**FuzzyInput**](class_fuzzy_input.md) object. 




        

<hr>



### function calculateFuzzySetPertinences 

_Calculate the pertinence of all_ [_**FuzzySet**_](class_fuzzy_set.md) _objects in the_[_**FuzzyInput**_](class_fuzzy_input.md) _._
```C++
bool FuzzyInput::calculateFuzzySetPertinences () 
```





**Returns:**

true always returns true. 





        

<hr>



### function ~FuzzyInput 

_Default destructor._ 
```C++
FuzzyInput::~FuzzyInput () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `include/eFLL/FuzzyInput.h`

