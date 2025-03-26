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

/// @brief A class to manage a fuzzy set (shape)
class FuzzySet
{
  public:
    /// @brief Default constructor
    FuzzySet();

    /**
     * @brief Construct a new Fuzzy Set object with provided points for a shape.
     *
     * @param[in] a the first point of the shape.
     * @param[in] b the second point of the shape.
     * @param[in] c the third point of the shape.
     * @param[in] d the fourth point of the shape.
     */
    FuzzySet(float a, float b, float c, float d);

    /**
     * @brief Get the location of point A (the first point of the shape).
     *
     * @return float the location of point A.
     */
    float getPointA();

    /**
     * @brief Get the location of point B (the second point of the shape).
     *
     * @return float the location of point B.
     */
    float getPointB();

    /**
     * @brief Get the location of point C (the third point of the shape).
     *
     * @return float the location of point C.
     */
    float getPointC();

    /**
     * @brief Get the location of point D (the fourth point of the shape).
     *
     * @return float the location of point D.
     */
    float getPointD();

    /**
     * @brief Calculate the pertinence of the set, according with the crispValue.
     *
     * @param[in] crispValue The input value to calculate the pertinence of the set on.
     * @return true always returns true.
     */
    bool calculatePertinence(float crispValue);

    /**
     * @brief Set the pertinence of the set.
     *
     * @note Will only set the pertinence if the provided pertinence is greater than the current pertinence.
     *
     * @details The overriding to a higher pertinence is because this could be called more than once by different
     * consequents, and the higher pertinence is the one that should be kept.
     *
     * @param[in] pertinence The new pertinence of the set.
     */
    void setPertinence(float pertinence);

    /**
     * @brief Get the pertinence of the set.
     *
     * @return float The pertinence of the set.
     */
    float getPertinence();

    /**
     * @brief Resets the pertinence of the set to 0.0.
     *
     */
    void reset();

  private:
    /// @brief The first point of the shape.
    float a;
    /// @brief The second point of the shape.
    float b;
    /// @brief The third point of the shape.
    float c;
    /// @brief The fourth point of the shape.
    float d;
    /// @brief The pertinence of the set.
    float pertinence;
};
#endif
