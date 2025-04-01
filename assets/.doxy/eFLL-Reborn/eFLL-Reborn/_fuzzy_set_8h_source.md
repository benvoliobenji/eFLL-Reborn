

# File FuzzySet.h

[**File List**](files.md) **>** [**eFLL**](dir_26fb29e3dc7aa006416ef68260f1131f.md) **>** [**FuzzySet.h**](_fuzzy_set_8h.md)

[Go to the documentation of this file](_fuzzy_set_8h.md)


```C++
/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzySet.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYSET_H
#define FUZZYSET_H

class FuzzySet
{
  public:
    FuzzySet();

    FuzzySet(float a, float b, float c, float d);

    float getPointA();

    float getPointB();

    float getPointC();

    float getPointD();

    bool calculatePertinence(float crispValue);

    void setPertinence(float pertinence);

    float getPertinence();

    void reset();

  private:
    float a;
    float b;
    float c;
    float d;
    float pertinence;
};
#endif
```


