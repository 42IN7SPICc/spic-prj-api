#ifndef SPIC_POINTUTIL_HPP
#define SPIC_POINTUTIL_HPP

#include <Point.hpp>

namespace spic
{
    /**
     * @brief A util for manipulating points.
     */
    class PointUtil
    {
        public:
            /**
             * @brief Calculate the unit vector of two points.
             * @param from The point to start at.
             * @param to The point to end at.
             * @param multiplier The multiplier used for the speed.
             * @return A unit point.
             */
            static spic::Point CalculateDirectionalPoint(const spic::Point& from, const spic::Point& to, double multiplier = 1.0);

            /**
             * @brief Calculate the unit vector of two points.
             * @param from The point to start at.
             * @param to The point to end at.
             * @param multiplier The multiplier used for the speed.
             * @param distance The distance between the two points.
             * @return A unit point.
             */
            static spic::Point CalculateDirectionalPoint(const spic::Point& from, const spic::Point& to, double multiplier, double& distance);

            /**
             * @brief Calculate the distance between two points.
             * @param from The point to start at.
             * @param to The point to end at.
             * @return The distance between two points.
             */
            static double Distance(const spic::Point& from, const spic::Point& to);

            /**
             * @brief Calculate the distance between the X and Y of a point.
             * @param pointDiff The point containing.
             * @return The distance between X and Y;
             */
            static double Distance(const spic::Point& pointDiff);

            /**
             * @brief Calculate the difference between two points.
             * @param point1 The first point.
             * @param point2 The second point.
             * @return The difference between two points,
             */
            static spic::Point PointDiff(const spic::Point& point1, const spic::Point& point2);

            /**
             * @brief Calculate the degrees from point1 to point2.
             * @param point1 The first point.
             * @param point2 The second point.
             * @return The degrees.
             */
            static double Degrees(const spic::Point& point1, const spic::Point& point2);
    };
}

#endif //SPIC_POINTUTIL_HPP
