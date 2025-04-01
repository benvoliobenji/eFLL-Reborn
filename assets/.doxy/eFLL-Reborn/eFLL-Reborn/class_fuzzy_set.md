

# Class FuzzySet



[**ClassList**](annotated.md) **>** [**FuzzySet**](class_fuzzy_set.md)



_A class to manage a fuzzy set (shape)_ 

* `#include <FuzzySet.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FuzzySet**](#function-fuzzyset-12) () <br>_Default constructor._  |
|   | [**FuzzySet**](#function-fuzzyset-22) (float a, float b, float c, float d) <br>_Construct a new_ [_**Fuzzy**_](class_fuzzy.md) _Set object with provided points for a shape._ |
|  bool | [**calculatePertinence**](#function-calculatepertinence) (float crispValue) <br>_Calculate the pertinence of the set, according with the crispValue._  |
|  float | [**getPertinence**](#function-getpertinence) () <br>_Get the pertinence of the set._  |
|  float | [**getPointA**](#function-getpointa) () <br>_Get the location of point A (the first point of the shape)._  |
|  float | [**getPointB**](#function-getpointb) () <br>_Get the location of point B (the second point of the shape)._  |
|  float | [**getPointC**](#function-getpointc) () <br>_Get the location of point C (the third point of the shape)._  |
|  float | [**getPointD**](#function-getpointd) () <br>_Get the location of point D (the fourth point of the shape)._  |
|  void | [**reset**](#function-reset) () <br>_Resets the pertinence of the set to 0.0._  |
|  void | [**setPertinence**](#function-setpertinence) (float pertinence) <br>_Set the pertinence of the set._  |




























## Public Functions Documentation




### function FuzzySet [1/2]

_Default constructor._ 
```C++
FuzzySet::FuzzySet () 
```




<hr>



### function FuzzySet [2/2]

_Construct a new_ [_**Fuzzy**_](class_fuzzy.md) _Set object with provided points for a shape._
```C++
FuzzySet::FuzzySet (
    float a,
    float b,
    float c,
    float d
) 
```





**Parameters:**


* `a` the first point of the shape. 
* `b` the second point of the shape. 
* `c` the third point of the shape. 
* `d` the fourth point of the shape. 




        

<hr>



### function calculatePertinence 

_Calculate the pertinence of the set, according with the crispValue._ 
```C++
bool FuzzySet::calculatePertinence (
    float crispValue
) 
```





**Parameters:**


* `crispValue` The input value to calculate the pertinence of the set on. 



**Returns:**

true always returns true. 





        

<hr>



### function getPertinence 

_Get the pertinence of the set._ 
```C++
float FuzzySet::getPertinence () 
```





**Returns:**

float The pertinence of the set. 





        

<hr>



### function getPointA 

_Get the location of point A (the first point of the shape)._ 
```C++
float FuzzySet::getPointA () 
```





**Returns:**

float the location of point A. 





        

<hr>



### function getPointB 

_Get the location of point B (the second point of the shape)._ 
```C++
float FuzzySet::getPointB () 
```





**Returns:**

float the location of point B. 





        

<hr>



### function getPointC 

_Get the location of point C (the third point of the shape)._ 
```C++
float FuzzySet::getPointC () 
```





**Returns:**

float the location of point C. 





        

<hr>



### function getPointD 

_Get the location of point D (the fourth point of the shape)._ 
```C++
float FuzzySet::getPointD () 
```





**Returns:**

float the location of point D. 





        

<hr>



### function reset 

_Resets the pertinence of the set to 0.0._ 
```C++
void FuzzySet::reset () 
```




<hr>



### function setPertinence 

_Set the pertinence of the set._ 
```C++
void FuzzySet::setPertinence (
    float pertinence
) 
```





**Note:**

Will only set the pertinence if the provided pertinence is greater than the current pertinence.


The overriding to a higher pertinence is because this could be called more than once by different consequents, and the higher pertinence is the one that should be kept.




**Parameters:**


* `pertinence` The new pertinence of the set. 




        

<hr>

------------------------------
The documentation for this class was generated from the following file `include/eFLL/FuzzySet.h`

