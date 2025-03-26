/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyRuleConsequent.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYRULECONSEQUENT_H
#define FUZZYRULECONSEQUENT_H

// IMPORTING NECESSARY LIBRARIES
#include <stdlib.h>

#include "FuzzySet.h"

/// @brief Linked list struct for FuzzySet objects
struct fuzzySetOutputArray
{
    /// @brief Pointer to the current FuzzySet
    FuzzySet* fuzzySet;
    /// @brief Pointer to the next FuzzySet in the list
    fuzzySetOutputArray* next;
};

/// @brief Class to manage the consequent of a fuzzy rule
class FuzzyRuleConsequent
{
  public:
    /// @brief Default constructor
    FuzzyRuleConsequent();

    /// @brief Default destructor
    ~FuzzyRuleConsequent();

    /**
     * @brief Add a new FuzzySet (for Output) into FuzzyRuleConsequent
     *
     * @note Will malloc a new fuzzySetOutputArray struct and add it to the linked list of FuzzySets. Uses the provided
     * FuzzySet to populate the new fuzzySetOutputArray struct.
     *
     * @param[in] fuzzySet The FuzzySet to add to the FuzzyRuleConsequent.
     * @retval true if the FuzzySet was added successfully.
     * @retval false if the FuzzySet could not be added or memory could not be allocated to add the new FuzzySet.
     */
    bool addOutput(FuzzySet* fuzzySet);

    /**
     * @brief Set the pertinence of this consequent (how much the fired rule will affect the output)
     *
     * @param[in] power The pertinence of this consequent.
     * @return true always returns true.
     */
    bool evaluate(float power);

  private:
    /// @brief The head of the linked list of FuzzySets
    fuzzySetOutputArray* fuzzySetOutputs;

    /**
     * @brief Recursive method to clean the linked list of FuzzySets
     *
     * @note Will free the memory allocated for each fuzzySetOutputArray struct in the linked list.
     *
     * @param[in] aux Pointer to the first fuzzySetOutputArray struct in the linked list to clean up.
     */
    void cleanFuzzySets(fuzzySetOutputArray* aux);
};
#endif
