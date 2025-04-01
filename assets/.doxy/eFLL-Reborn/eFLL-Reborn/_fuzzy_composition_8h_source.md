

# File FuzzyComposition.h

[**File List**](files.md) **>** [**eFLL**](dir_26fb29e3dc7aa006416ef68260f1131f.md) **>** [**FuzzyComposition.h**](_fuzzy_composition_8h.md)

[Go to the documentation of this file](_fuzzy_composition_8h.md)


```C++
/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyComposition.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYCOMPOSITION_H
#define FUZZYCOMPOSITION_H

// IMPORTING NECESSARY LIBRARIES
#include <stdlib.h>

// CONSTANTS
#define EPSILON_VALUE 1.0E-3

struct pointsArray
{
    pointsArray* previous;
    float point;
    float pertinence;
    pointsArray* next;
};


class FuzzyComposition
{
  public:
    FuzzyComposition();

    ~FuzzyComposition();

    bool addPoint(float point, float pertinence);

    bool checkPoint(float point, float pertinence);

    bool build();

    float calculate();

    bool empty();

    int countPoints();

  private:
    pointsArray* points;


    void cleanPoints(pointsArray* aux);

    bool rebuild(pointsArray* aSegmentBegin,
                 pointsArray* aSegmentEnd,
                 pointsArray* bSegmentBegin,
                 pointsArray* bSegmentEnd);

    bool rmvPoint(pointsArray* point);
};
#endif
```


