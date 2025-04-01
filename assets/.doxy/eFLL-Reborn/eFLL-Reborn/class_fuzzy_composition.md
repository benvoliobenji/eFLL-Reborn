

# Class FuzzyComposition



[**ClassList**](annotated.md) **>** [**FuzzyComposition**](class_fuzzy_composition.md)



_A class to manage the composition of points and pertinences for a_ [_**FuzzyOutput**_](class_fuzzy_output.md) _._

* `#include <FuzzyComposition.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FuzzyComposition**](#function-fuzzycomposition) () <br>_Default constructor._  |
|  bool | [**addPoint**](#function-addpoint) (float point, float pertinence) <br>_Adds a new point and its pertinence to the_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _._ |
|  bool | [**build**](#function-build) () <br>_Builds the_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _by sorting the points in the list and correcting any intersections._ |
|  float | [**calculate**](#function-calculate) () <br>_Calculates the centroid of the_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _._ |
|  bool | [**checkPoint**](#function-checkpoint) (float point, float pertinence) <br>_Checks if a point and if its pertinence is in the_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _._ |
|  int | [**countPoints**](#function-countpoints) () <br>_Counts the amount of points used in this_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _._ |
|  bool | [**empty**](#function-empty) () <br>_Resets the_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _by deallocating all points in the list._ |
|   | [**~FuzzyComposition**](#function-fuzzycomposition) () <br>_Default destructor._  |




























## Public Functions Documentation




### function FuzzyComposition 

_Default constructor._ 
```C++
FuzzyComposition::FuzzyComposition () 
```




<hr>



### function addPoint 

_Adds a new point and its pertinence to the_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _._
```C++
bool FuzzyComposition::addPoint (
    float point,
    float pertinence
) 
```





**Note:**

Will malloc a new [**pointsArray**](structpoints_array.md) struct and add it to the linked list of points. Uses the provided point and pertinence values to populate the new [**pointsArray**](structpoints_array.md) struct.




**Parameters:**


* `point` The point to add to the [**FuzzyComposition**](class_fuzzy_composition.md). 
* `pertinence` The pertinence of the point to add to the [**FuzzyComposition**](class_fuzzy_composition.md). 



**Return value:**


* `true` if the point was added successfully. 
* `false` if the point could not be added or memory could not be allocated to add the new point. 




        

<hr>



### function build 

_Builds the_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _by sorting the points in the list and correcting any intersections._
```C++
bool FuzzyComposition::build () 
```





**Returns:**

true always returns true. 





        

<hr>



### function calculate 

_Calculates the centroid of the_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _._
```C++
float FuzzyComposition::calculate () 
```





**Returns:**

float the centroid of the [**FuzzyComposition**](class_fuzzy_composition.md). 





        

<hr>



### function checkPoint 

_Checks if a point and if its pertinence is in the_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _._
```C++
bool FuzzyComposition::checkPoint (
    float point,
    float pertinence
) 
```





**Note:**

this checks for exact matches of the point and pertinence in the [**FuzzyComposition**](class_fuzzy_composition.md).




**Parameters:**


* `point` The point to check for in the [**FuzzyComposition**](class_fuzzy_composition.md). 
* `pertinence` The pertinence of the point to check for in the [**FuzzyComposition**](class_fuzzy_composition.md). 



**Return value:**


* `true` if the point and pertinence are in the [**FuzzyComposition**](class_fuzzy_composition.md). 
* `false` if the point and pertinence are not in the [**FuzzyComposition**](class_fuzzy_composition.md). 




        

<hr>



### function countPoints 

_Counts the amount of points used in this_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _._
```C++
int FuzzyComposition::countPoints () 
```





**Returns:**

int the amount of points in the [**FuzzyComposition**](class_fuzzy_composition.md). 





        

<hr>



### function empty 

_Resets the_ [_**FuzzyComposition**_](class_fuzzy_composition.md) _by deallocating all points in the list._
```C++
bool FuzzyComposition::empty () 
```





**Note:**

will call free() on each [**pointsArray**](structpoints_array.md) struct in the linked list of points.




**Returns:**

true always returns true. 





        

<hr>



### function ~FuzzyComposition 

_Default destructor._ 
```C++
FuzzyComposition::~FuzzyComposition () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `include/eFLL/FuzzyComposition.h`

