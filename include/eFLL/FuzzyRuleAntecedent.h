/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyRuleAntecedent.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYRULEANTECEDENT_H
#define FUZZYRULEANTECEDENT_H

// IMPORTING NECESSARY LIBRARIES
#include <stdlib.h>

#include "FuzzySet.h"

// CONSTANTS
// possible logic operators

/// @brief The AND operator.
#define OP_AND 1
/// @brief The OR operator.
#define OP_OR 2

// possible join associations modes

/// @brief The mode for a single FuzzySet.
#define MODE_FS 1
/// @brief The mode for two FuzzySets.
#define MODE_FS_FS 2
/// @brief The mode for a FuzzySet and a FuzzyRuleAntecedent.
#define MODE_FS_FRA 3
/// @brief The mode for two FuzzyRuleAntecedents.
#define MODE_FRA_FRA 4

/// @brief Class to manage the antecedent of a fuzzy rule
class FuzzyRuleAntecedent
{
  public:
    /// @brief Default constructor
    FuzzyRuleAntecedent();

    /**
     * @brief Create an antecedent with only one set.
     *
     * @note Example result would be "IF (COLD)"
     *
     * @param[in] fuzzySet The fuzzy set to add.
     * @retval true if the FuzzySet was added successfully.
     * @retval false if the FuzzySet could not be added or was not valid.
     */
    bool joinSingle(FuzzySet* fuzzySet);

    /**
     * @brief Create an antecedent with two sets joined by an AND operator.
     *
     * @note Example result would be "IF (COLD) AND (WINDY)"
     *
     * @param[in] fuzzySet1 The first fuzzy set to add.
     * @param[in] fuzzySet2 The second fuzzy set to add.
     * @retval true if the FuzzySets were added successfully.
     * @retval false if the FuzzySets could not be added or either were not valid.
     */
    bool joinWithAND(FuzzySet* fuzzySet1, FuzzySet* fuzzySet2);

    /**
     * @brief Create an antecedent with two sets joined by an OR operator.
     *
     * @note Example result would be "IF (COLD) OR (WINDY)"
     *
     * @param[in] fuzzySet1 The first fuzzy set to add.
     * @param[in] fuzzySet2 The second fuzzy set to add.
     * @retval true if the FuzzySets were added successfully.
     * @retval false if the FuzzySets could not be added or either were not valid.
     */
    bool joinWithOR(FuzzySet* fuzzySet1, FuzzySet* fuzzySet2);

    /**
     * @brief Create an antecedent with one set and one antecedent joined by an AND operator.
     *
     * @note Example result would be "IF (COLD) AND (IF WINDY AND RAINY)"
     *
     * @param[in] fuzzySet The fuzzy set to add.
     * @param[in] fuzzyRuleAntecedent The antecedent to add.
     * @retval true if the FuzzySet and FuzzyRuleAntecedent were added successfully.
     * @return false if the FuzzySet or FuzzyRuleAntecedent could not be added or were not valid.
     */
    bool joinWithAND(FuzzySet* fuzzySet, FuzzyRuleAntecedent* fuzzyRuleAntecedent);

    /**
     * @ref joinWithAND(FuzzySet*, FuzzyRuleAntecedent*) "Same as above but inverted"
     */
    bool joinWithAND(FuzzyRuleAntecedent* fuzzyRuleAntecedent, FuzzySet* fuzzySet);

    /**
     * @brief Create an antecedent with one set and one antecedent joined by an OR operator.
     *
     * @note Example result would be "IF (COLD) OR (IF WINDY AND RAINY)"
     *
     * @param[in] fuzzySet The fuzzy set to add.
     * @param[in] fuzzyRuleAntecedent The antecedent to add.
     * @retval true if the FuzzySet and FuzzyRuleAntecedent were added successfully.
     * @return false if the FuzzySet or FuzzyRuleAntecedent could not be added or were not valid.
     */
    bool joinWithOR(FuzzySet* fuzzySet, FuzzyRuleAntecedent* fuzzyRuleAntecedent);

    /**
     * @ref joinWithOR(FuzzySet*, FuzzyRuleAntecedent*) "Same as above but inverted"
     */
    bool joinWithOR(FuzzyRuleAntecedent* fuzzyRuleAntecedent, FuzzySet* fuzzySet);

    /**
     * @brief Create an antecedent with two antecedents joined by an AND operator.
     *
     * @note Example result would be "IF (IF COLD AND WINDY) AND (IF WINDY AND RAINY)"
     *
     * @param[in] fuzzyRuleAntecedent1 The first antecedent to add.
     * @param[in] fuzzyRuleAntecedent2 The second antecedent to add.
     * @retval true if the FuzzyRuleAntecedents were added successfully.
     * @return false if the FuzzyRuleAntecedents could not be added or were not valid.
     */
    bool joinWithAND(FuzzyRuleAntecedent* fuzzyRuleAntecedent1, FuzzyRuleAntecedent* fuzzyRuleAntecedent2);

    /**
     * @brief Create an antecedent with two antecedents joined by an OR operator.
     *
     * @note Example result would be "IF (IF COLD AND WINDY) OR (IF WINDY AND RAINY)"
     *
     * @param[in] fuzzyRuleAntecedent1 The first antecedent to add.
     * @param[in] fuzzyRuleAntecedent2 The second antecedent to add.
     * @retval true if the FuzzyRuleAntecedents were added successfully.
     * @retval false if the FuzzyRuleAntecedents could not be added or were not valid.
     */
    bool joinWithOR(FuzzyRuleAntecedent* fuzzyRuleAntecedent1, FuzzyRuleAntecedent* fuzzyRuleAntecedent2);

    /**
     * @brief Calculates the pertinence of the antecedent.
     *
     * @note Relies on underlying FuzzySets to have their pertinence calculated first.
     *
     * @return float The pertinence of the antecedent.
     */
    float evaluate();

  private:
    /// @brief The operator to use in the antecedent.
    int op;
    /// @brief The mode of the antecedent.
    int mode;
    /// @brief The first FuzzySet in the antecedent.
    FuzzySet* fuzzySet1;
    /// @brief The second FuzzySet in the antecedent.
    FuzzySet* fuzzySet2;
    /// @brief The first FuzzyRuleAntecedent in the antecedent.
    FuzzyRuleAntecedent* fuzzyRuleAntecedent1;
    /// @brief The second FuzzyRuleAntecedent in the antecedent.
    FuzzyRuleAntecedent* fuzzyRuleAntecedent2;
};
#endif
