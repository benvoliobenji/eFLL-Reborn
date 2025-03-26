/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyIO.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYIO_H
#define FUZZYIO_H

// IMPORTING NECESSARY LIBRARIES
#include <stdlib.h>

#include "FuzzySet.h"

/// @brief Linked list struct for FuzzySet objects
struct fuzzySetArray
{
    /// @brief Pointer to the current FuzzySet
    FuzzySet* fuzzySet;
    /// @brief Pointer to the next FuzzySet in the list
    fuzzySetArray* next;
};

/// @brief Class to manage fuzzy inputs and outputs. Base class for FuzzyInput and FuzzyOutput.
class FuzzyIO
{
  public:
    /// @brief  Default constructor
    FuzzyIO();

    /**
     * @brief Construct a new FuzzyIO object with a provided index.
     *
     * @param[in] index The index of the FuzzyIO object.
     */
    FuzzyIO(int index);

    /// @brief Default destructor
    ~FuzzyIO();

    /**
     * @brief Get the current index of the FuzzyIO object.
     *
     * @return int the index of the FuzzyIO object.
     */
    int getIndex();

    /**
     * @brief Set the value of the crisp input for this FuzzyIO object.
     *
     * @param[in] crispInput The crisp input value to set.
     */
    void setCrispInput(float crispInput);

    /**
     * @brief Get the value of the crisp input for this FuzzyIO object.
     *
     * @return float the crisp input value.
     */
    float getCrispInput();

    /**
     * @brief Add a new FuzzySet to the FuzzyIO object.
     *
     * @note will malloc a new fuzzySetArray struct and add it to the linked list of fuzzySets. Uses the provided
     * pointer to the FuzzySet object as the fuzzySet member of the new fuzzySetArray struct.
     *
     * @param[in] fuzzySet Pointer to the FuzzySet object to add to the FuzzyIO object.
     * @retval true if the FuzzySet was added successfully.
     * @retval false if the FuzzySet could not be added or memory could not be allocated to add the new set.
     */
    bool addFuzzySet(FuzzySet* fuzzySet);

    /**
     * @brief Resets all fuzzy sets.
     *
     * @return true always returns true.
     */
    void resetFuzzySets();

  protected:
    /// @brief The index of the FuzzyIO object.
    int index;
    /// @brief The crisp input value for the FuzzyIO object.
    float crispInput;
    /// @brief Linked list of FuzzySet objects.
    fuzzySetArray* fuzzySets;

    /**
     * @brief Recursively clean all FuzzySet structs from memory.
     *
     * @param[in] aux Pointer to the first FuzzySet struct in the linked list to clean up.
     */
    void cleanFuzzySets(fuzzySetArray* aux);
};
#endif
