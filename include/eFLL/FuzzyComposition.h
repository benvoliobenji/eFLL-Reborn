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

/// @brief Linked list struct for a point and its pertinence
struct pointsArray
{
    pointsArray* previous;
    float point;
    float pertinence;
    pointsArray* next;
};


/**
 * @brief A class to manage the composition of points and pertinences for a FuzzyOutput.
 */
class FuzzyComposition
{
  public:
    /// @brief Default constructor
    FuzzyComposition();

    /// @brief Default destructor
    ~FuzzyComposition();

    /**
     * @brief Adds a new point and its pertinence to the FuzzyComposition.
     *
     * @note Will malloc a new pointsArray struct and add it to the linked list of points. Uses the provided point and
     * pertinence values to populate the new pointsArray struct.
     *
     * @param[in] point The point to add to the FuzzyComposition.
     * @param[in] pertinence The pertinence of the point to add to the FuzzyComposition.
     * @retval true if the point was added successfully.
     * @retval false if the point could not be added or memory could not be allocated to add the new point.
     */
    bool addPoint(float point, float pertinence);

    /**
     * @brief Checks if a point and if its pertinence is in the FuzzyComposition.
     *
     * @note this checks for exact matches of the point and pertinence in the FuzzyComposition.
     *
     * @param[in] point The point to check for in the FuzzyComposition.
     * @param[in] pertinence The pertinence of the point to check for in the FuzzyComposition.
     * @retval true if the point and pertinence are in the FuzzyComposition.
     * @retval false if the point and pertinence are not in the FuzzyComposition.
     */
    bool checkPoint(float point, float pertinence);

    /**
     * @brief Builds the FuzzyComposition by sorting the points in the list and correcting any intersections.
     *
     * @return true always returns true.
     */
    bool build();

    /**
     * @brief Calculates the centroid of the FuzzyComposition.
     *
     * @return float the centroid of the FuzzyComposition.
     */
    float calculate();

    /**
     * @brief Resets the FuzzyComposition by deallocating all points in the list.
     *
     * @note will call free() on each pointsArray struct in the linked list of points.
     *
     * @return true always returns true.
     */
    bool empty();

    /**
     * @brief Counts the amount of points used in this FuzzyComposition.
     *
     * @return int the amount of points in the FuzzyComposition.
     */
    int countPoints();

  private:
    /// @brief The head of the linked list of points.
    pointsArray* points;


    /**
     * @brief Recursively clean all pointsArray structs from memory.
     *
     * @note calls free() on the provided pointsArray struct and all of its children.
     *
     * @param[in] aux Pointer to the first pointsArray struct in the linked list to clean up.
     */
    void cleanPoints(pointsArray* aux);

    /**
     * @brief Search intersection between two segments, if found, create a new pointsArray (in found intersection) and
     * remove not necessary ones.
     *
     * @param[in] aSegmentBegin The beginning of the first segment to check for intersection.
     * @param[in] aSegmentEnd The end of the first segment to check for intersection.
     * @param[in] bSegmentBegin The beginning of the second segment to check for intersection.
     * @param[in] bSegmentEnd The end of the second segment to check for intersection.
     * @retval true if an intersection was found and corrected.
     * @retval false if no intersection was found.
     */
    bool rebuild(pointsArray* aSegmentBegin,
                 pointsArray* aSegmentEnd,
                 pointsArray* bSegmentBegin,
                 pointsArray* bSegmentEnd);

    /**
     * @brief Remove a pointsArray struct from the linked list.
     *
     * @param[in] point The pointsArray struct to remove from the linked list.
     * @return true always returns true.
     */
    bool rmvPoint(pointsArray* point);
};
#endif
