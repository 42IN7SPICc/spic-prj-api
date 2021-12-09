#ifndef POINT_H_
#define POINT_H_

namespace spic
{
    /**
     * @brief Struct representing both a 2D point and a 2D vector.
     * @spicapi
     */
    struct Point
    {
        double x;
        double y;

        /**
         * @brief Operator to add two points.
         * @param lhs The left Point.
         * @param rhs The right Point.
         * @return The sum of the two points.
         * @sharedapi
         */
        friend Point operator+(Point lhs, const Point& rhs);

        /**
         * @brief Add one Point to this.
         * @param rhs The point to add.
         * @return The sum of the two points.
         * @sharedapi
         */
        Point& operator+=(const Point& rhs);

        /**
         * @brief Operator to subtract two points.
         * @param lhs The left Point.
         * @param rhs The right Point.
         * @return The subtraction of the two points.
         * @sharedapi
         */
        friend Point operator-(Point lhs, const Point& rhs);

        /**
         * @brief Subtract one Point to this.
         * @param rhs The point to subtract.
         * @return The subtraction of the two points.
         * @sharedapi
         */
        Point& operator-=(const Point& rhs);
    };

}

#endif // POINT_H_
