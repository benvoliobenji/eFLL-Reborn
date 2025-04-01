

# Class FuzzyOutput



[**ClassList**](annotated.md) **>** [**FuzzyOutput**](class_fuzzy_output.md)



_Class to manage fuzzy outputs._ 

* `#include <FuzzyOutput.h>`



Inherits the following classes: [FuzzyIO](class_fuzzy_i_o.md)






















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FuzzyOutput**](#function-fuzzyoutput-12) () <br>_Default constructor._  |
|   | [**FuzzyOutput**](#function-fuzzyoutput-22) (int index) <br>_Construct a new_ [_**Fuzzy**_](class_fuzzy.md) _Output object with a provided index._ |
|  float | [**getCrispOutput**](#function-getcrispoutput) () <br>_Get the Crisp Output after a truncation process._  |
|  [**FuzzyComposition**](class_fuzzy_composition.md) \* | [**getFuzzyComposition**](#function-getfuzzycomposition) () <br>_Get the_ [_**Fuzzy**_](class_fuzzy.md) _Composition of all the fuzzy sets in the_[_**FuzzyOutput**_](class_fuzzy_output.md) _._ |
|  bool | [**order**](#function-order) () <br>_Sort the fuzzy sets in the_ [_**FuzzyOutput**_](class_fuzzy_output.md) _by the reference of the point A in ascending order._ |
|  bool | [**truncate**](#function-truncate) () <br>_Build and calculate the centroid of the fuzzy sets, leading to the crisp output._  |
|   | [**~FuzzyOutput**](#function-fuzzyoutput) () <br>_Default destructor._  |


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




### function FuzzyOutput [1/2]

_Default constructor._ 
```C++
FuzzyOutput::FuzzyOutput () 
```




<hr>



### function FuzzyOutput [2/2]

_Construct a new_ [_**Fuzzy**_](class_fuzzy.md) _Output object with a provided index._
```C++
FuzzyOutput::FuzzyOutput (
    int index
) 
```





**Parameters:**


* `index` The index of the [**FuzzyOutput**](class_fuzzy_output.md) object. 




        

<hr>



### function getCrispOutput 

_Get the Crisp Output after a truncation process._ 
```C++
float FuzzyOutput::getCrispOutput () 
```





**Returns:**

float the crisp output of the [**FuzzyOutput**](class_fuzzy_output.md). 





        

<hr>



### function getFuzzyComposition 

_Get the_ [_**Fuzzy**_](class_fuzzy.md) _Composition of all the fuzzy sets in the_[_**FuzzyOutput**_](class_fuzzy_output.md) _._
```C++
FuzzyComposition * FuzzyOutput::getFuzzyComposition () 
```





**Returns:**

FuzzyComposition\* a pointer to the [**FuzzyComposition**](class_fuzzy_composition.md) object of the [**FuzzyOutput**](class_fuzzy_output.md). 





        

<hr>



### function order 

_Sort the fuzzy sets in the_ [_**FuzzyOutput**_](class_fuzzy_output.md) _by the reference of the point A in ascending order._
```C++
bool FuzzyOutput::order () 
```



It is just a simple Bubble Sort.




**Returns:**

true always returns true. 





        

<hr>



### function truncate 

_Build and calculate the centroid of the fuzzy sets, leading to the crisp output._ 
```C++
bool FuzzyOutput::truncate () 
```





**Returns:**

true always returns true. 





        

<hr>



### function ~FuzzyOutput 

_Default destructor._ 
```C++
FuzzyOutput::~FuzzyOutput () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `include/eFLL/FuzzyOutput.h`

