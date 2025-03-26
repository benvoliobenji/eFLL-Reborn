/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * FuzzyRule.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZYRULE_H
#define FUZZYRULE_H

// IMPORTING NECESSARY LIBRARIES
#include "FuzzyRuleAntecedent.h"
#include "FuzzyRuleConsequent.h"

/// @brief Class to manage fuzzy rules
class FuzzyRule
{
  public:
    /// @brief Default constructor
    FuzzyRule();

    /**
     * @brief Construct a new Fuzzy Rule object with a provided index, antecedent and consequent.
     *
     * @param[in] index The index of the FuzzyRule object.
     * @param[in] fuzzyRuleAntecedent The antecedent of the FuzzyRule.
     * @param[in] fuzzyRuleConsequent The consequent of the FuzzyRule.
     */
    FuzzyRule(int index, FuzzyRuleAntecedent* fuzzyRuleAntecedent, FuzzyRuleConsequent* fuzzyRuleConsequent);

    /**
     * @brief Get the Index of the FuzzyRule.
     *
     * @return int the index of the FuzzyRule.
     */
    int getIndex();

    /**
     * @brief Evaluates the rule expression given the antecedent and consequent.
     *
     * @retval true if the rule was fired.
     * @retval false if the rule was not fired.
     */
    bool evaluateExpression();

    /**
     * @brief Check to see if the rule was fired.
     *
     * @retval true if the rule was fired.
     * @retval false if the rule was not fired.
     */
    bool isFired();

  private:
    /// @brief The index of the FuzzyRule.
    int index;
    /// @brief The state of the rule, if it was fired or not.
    bool fired;
    /// @brief The antecedent of the FuzzyRule.
    FuzzyRuleAntecedent* fuzzyRuleAntecedent;
    /// @brief The consequent of the FuzzyRule.
    FuzzyRuleConsequent* fuzzyRuleConsequent;
};
#endif
