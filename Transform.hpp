#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include "Point.hpp"

namespace spic {
    /**
     * @brief Instances of this class represent specific 2D transformations.
     * @spicapi
     */
    struct Transform {
        Point position; // Translation (shift)
        double rotation; // Rotation, in radians
        double scale; // Multiplication factor

        /**
         * @brief Operator to add two Transforms.
         * @param lhs The left Transform.
         * @param rhs The right Transform.
         * @return The sum of the two Transforms.
         * @sharedapi
         */
        friend Transform operator+(Transform lhs, const Transform& rhs);

        /**
         * @brief Add one Transform to this.
         * @param rhs The Transform to add.
         * @return The sum of the two Transforms.
         * @sharedapi
         */
        Transform& operator+=(const Transform& rhs);

        /**
         * @brief Operator to subtract two Transforms.
         * @param lhs The left Transform.
         * @param rhs The right Transform.
         * @return The subtraction of the two Transforms.
         * @sharedapi
         */
        friend Transform operator-(Transform lhs, const Transform& rhs);

        /**
         * @brief Subtract one Transform to this.
         * @param rhs The Transform to subtract.
         * @return The subtraction of the two Transforms.
         * @sharedapi
         */
        Transform& operator-=(const Transform& rhs);

        /**
         * @brief Operator to add a Point to a Transform.
         * @param lhs The Transform.
         * @param rhs The Point.
         * @return The Transform with the added Point.
         * @sharedapi
         */
        friend Transform operator+(Transform lhs, const Point& rhs);
    };
}

#endif // TRANSFORM_H_
