/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyOutput.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYOUTPUT_H
#define FUZZYOUTPUT_H

// IMPORTING NECESSARY LIBRARIES
#include "FuzzyComposition.h"
#include "FuzzyIO.h"

/// @brief Class to manage fuzzy outputs
class FuzzyOutput : public FuzzyIO
{
  public:
    /// @brief Default constructor
    FuzzyOutput();

    /**
     * @brief Construct a new Fuzzy Output object with a provided index.
     *
     * @param[in] index The index of the FuzzyOutput object.
     */
    FuzzyOutput(int index);

    /// @brief Default destructor
    ~FuzzyOutput();

    /**
     * @brief Build and calculate the centroid of the fuzzy sets, leading to the crisp output.
     *
     * @return true always returns true.
     */
    bool truncate();

    /**
     * @brief Get the Crisp Output after a truncation process.
     *
     * @return float the crisp output of the FuzzyOutput.
     */
    float getCrispOutput();


    /**
     * @brief Sort the fuzzy sets in the FuzzyOutput by the reference of the point A in ascending order.
     *
     * @details It is just a simple Bubble Sort.
     *
     * @return true always returns true.
     */
    bool order();

    /**
     * @brief Get the Fuzzy Composition of all the fuzzy sets in the FuzzyOutput.
     *
     * @return FuzzyComposition* a pointer to the FuzzyComposition object of the FuzzyOutput.
     */
    FuzzyComposition* getFuzzyComposition();

  private:
    /// @brief The FuzzyComposition object of the FuzzyOutput.
    FuzzyComposition* fuzzyComposition;

    /**
     * @brief Swap the references of two FuzzySet objects.
     *
     * @param[in] fuzzySetA The first FuzzySet to swap.
     * @param[in] fuzzySetB The second FuzzySet to swap.
     * @return true always returns true.
     */
    bool swap(fuzzySetArray* fuzzySetA, fuzzySetArray* fuzzySetB);

    /**
     * @brief Rebuild some point, the new point is calculated finding the intersection between two lines.
     *
     * @param[in] x1 The x coordinate of the first point.
     * @param[in] y1 The y coordinate of the first point.
     * @param[in] x2 The x coordinate of the second point.
     * @param[in] y2 The y coordinate of the second point.
     * @param[in] x3 The x coordinate of the third point.
     * @param[in] y3 The y coordinate of the third point.
     * @param[in] x4 The x coordinate of the fourth point.
     * @param[in] y4 The y coordinate of the fourth point.
     * @param[out] point The new point.
     * @param[out] pertinence The pertinence of the new point.
     * @retval true if the point was rebuilt successfully.
     * @retval false if the point could not be rebuilt due to parallel lines.
     */
    bool rebuild(float x1,
                 float y1,
                 float x2,
                 float y2,
                 float x3,
                 float y3,
                 float x4,
                 float y4,
                 float* point,
                 float* pertinence);
};
#endif
