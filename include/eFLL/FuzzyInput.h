/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyInput.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYINPUT_H
#define FUZZYINPUT_H

// IMPORTING NECESSARY LIBRARIES
#include "FuzzyIO.h"

/// @brief Class to manage fuzzy inputs
class FuzzyInput : public FuzzyIO
{
  public:
    /// @brief Default constructor
    FuzzyInput();

    /**
     * @brief Construct a new Fuzzy Input object with a provided index.
     *
     * @param[in] index The index of the FuzzyInput object.
     */
    FuzzyInput(int index);

    /// @brief Default destructor
    ~FuzzyInput();

    /**
     * @brief Calculate the pertinence of all FuzzySet objects in the FuzzyInput.
     *
     * @return true always returns true.
     */
    bool calculateFuzzySetPertinences();
};
#endif
