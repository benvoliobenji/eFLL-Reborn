/*
 * Robotic Research Group (RRG)
 * State University of Piauí (UESPI), Brazil - Piauí - Teresina
 *
 * Fuzzy.h
 *
 *      Author: AJ Alves <aj.alves@zerokol.com>
 *          Co authors: Dr. Ricardo Lira <ricardor_usp@yahoo.com.br>
 *                      Msc. Marvin Lemos <marvinlemos@gmail.com>
 *                      Douglas S. Kridi <douglaskridi@gmail.com>
 *                      Kannya Leal <kannyal@hotmail.com>
 */
#ifndef FUZZY_H
#define FUZZY_H

// IMPORTING NECESSARY LIBRARIES
#include <inttypes.h>

#include "FuzzyInput.h"
#include "FuzzyOutput.h"
#include "FuzzyRule.h"


/// @brief Linked list struct for FuzzyInput objects
struct fuzzyInputArray
{
    /// @brief Pointer to the current FuzzyInput
    FuzzyInput* fuzzyInput;
    /// @brief Pointer to the next FuzzyInput in the list
    fuzzyInputArray* next;
};


/// @brief Linked list struct for FuzzyOutput objects
struct fuzzyOutputArray
{
    /// @brief Pointer to the current FuzzyOutput
    FuzzyOutput* fuzzyOutput;
    /// @brief Pointer to the next FuzzyOutput in the list
    fuzzyOutputArray* next;
};

/// @brief Linked list struct for FuzzyRule objects
struct fuzzyRuleArray
{
    /// @brief Pointer to the current FuzzyRule
    FuzzyRule* fuzzyRule;
    /// @brief Pointer to the next FuzzyRule in the list
    fuzzyRuleArray* next;
};

// Main class of this library
/**
 * @brief The main class of the eFLL library. This class is responsible for managing the fuzzy logic system. From adding
 * inputs and outputs to the system, to defining rules and calculating the output.
 *
 */
class Fuzzy
{
  public:
    /// @brief Default constructor
    Fuzzy();

    /// @brief Default destructor
    ~Fuzzy();

    /**
     * @brief Add a new FuzzyInput to the fuzzy logic system.
     *
     * @note will malloc a new fuzzyInputArray struct and add it to the linked list of fuzzyInputs. Uses the provided
     * pointer to the FuzzyInput object as the fuzzyInput member of the new fuzzyInputArray struct.
     *
     * @param[in] fuzzyInput Pointer to the FuzzyInput object to add to the system.
     * @retval true if the FuzzyInput was added successfully.
     * @retval false if the FuzzyInput could not be added or memory could not be allocated to add the new input.
     */
    bool addFuzzyInput(FuzzyInput* fuzzyInput);

    /**
     * @brief Add a new FuzzyOutput to the fuzzy logic system.
     *
     * @note will malloc a new fuzzyOutputArray struct and add it to the linked list of fuzzyOutputs. Uses the provided
     * pointer to the FuzzyOutput object as the fuzzyOutput member of the new fuzzyOutputArray struct.
     *
     * @param[in] fuzzyOutput Pointer to the FuzzyOutput object to add to the system.
     * @retval true if the FuzzyOutput was added successfully.
     * @retval false if the FuzzyOutput could not be added or memory could not be allocated to add the new output.
     */
    bool addFuzzyOutput(FuzzyOutput* fuzzyOutput);

    /**
     * @brief Add a new FuzzyRule to the fuzzy logic system.
     *
     * @note will malloc a new fuzzyRuleArray struct and add it to the linked list of fuzzyRules. Uses the provided
     * pointer to the FuzzyRule object as the fuzzyRule member of the new fuzzyRuleArray struct.
     *
     * @param[in] fuzzyRule Pointer to the FuzzyRule object to add to the system.
     * @retval true if the FuzzyRule was added successfully.
     * @retval false if the FuzzyRule could not be added or memory could not be allocated to add the new rule.
     */
    bool addFuzzyRule(FuzzyRule* fuzzyRule);

    /**
     * @brief Set the crisp value of the FuzzyInput at the
     * provided index. The crisp value is the value that the FuzzyInput will be evaluated against to determine the
     * pertinence of the FuzzySets in the input.
     *
     * @param[in] fuzzyInputIndex Index of the FuzzyInput to set the crisp value for.
     * @param[in] crispValue The crisp value to set for the FuzzyInput.
     * @retval true if the crisp value was set successfully.
     * @retval false if the FuzzyInput at the provided index could not be found.
     */
    bool setInput(int fuzzyInputIndex, float crispValue);

    /**
     * @brief Calculate and store the result of a fuzzification for each FuzzyOutput given the current crisp values of
     * the FuzzyInputs and the rules provided to the system.
     *
     * @returns true will always return true.
     */
    bool fuzzify();

    /**
     * @brief Check if the FuzzyRule at the provided index was triggered durring fuzzification.
     *
     * @param[in] fuzzyRuleIndex Index of the FuzzyRule to check.
     * @retval true if the FuzzyRule was triggered.
     * @retval false if the FuzzyRule was not triggered.
     */
    bool isFiredRule(int fuzzyRuleIndex);

    /**
     * @brief Defuzzify the output of a FuzzyOutput at the provided index.
     *
     * @param[in] fuzzyOutputIndex Index of the FuzzyOutput to defuzzify.
     * @return float The result of fuzzification for that FuzzyOutput.
     */
    float defuzzify(int fuzzyOutputIndex);

  private:
    /// @brief Pointer to the first FuzzyInput in the linked list of FuzzyInputs.
    fuzzyInputArray* fuzzyInputs;
    /// @brief Pointer to the first FuzzyOutput in the linked list of FuzzyOutputs.
    fuzzyOutputArray* fuzzyOutputs;
    /// @brief Pointer to the first FuzzyRule in the linked list of FuzzyRules.
    fuzzyRuleArray* fuzzyRules;

    /**
     * @brief Clean up the linked list of FuzzyInputs.
     *
     * @note calls free() on the provided fuzzyInputArray struct and all of its children.
     *
     * @param[in] aux Pointer to the first fuzzyInputArray struct in the linked list to clean up.
     */
    void cleanFuzzyInputs(fuzzyInputArray* aux);

    /**
     * @brief Clean up the linked list of FuzzyOutputs.
     *
     * @note calls free() on the provided fuzzyOutputArray struct and all of its children.
     *
     * @param[in] aux Pointer to the first fuzzyOutputArray struct in the linked list to clean up.
     */
    void cleanFuzzyOutputs(fuzzyOutputArray* aux);

    /**
     * @brief Clean up the linked list of FuzzyRules.
     *
     * @note calls free() on the provided fuzzyRuleArray struct and all of its children.
     *
     * @param[in] aux Pointer to the first fuzzyRuleArray struct in the linked list to clean up.
     */
    void cleanFuzzyRules(fuzzyRuleArray* aux);
};
#endif
