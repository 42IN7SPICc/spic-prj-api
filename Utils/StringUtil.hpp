#ifndef SPIC_STRINGHELPER_H
#define SPIC_STRINGHELPER_H

#include <string>
#include <vector>

namespace spic
{
    /**
     * @brief A util to manipulate string.
     */
    class StringUtil
    {
        public:
            /**
             * @brief Check whether a string end with a given end.
             * @param haystack The string to test.
             * @param needle The part to end with.
             * @return Whether the string ends with the given end.
             */
            static bool EndsWith(const std::string& haystack, const std::string& needle);

            /**
             * @brief Check whether a string starts with a given start.
             * @param haystack The string to test.
             * @param needle The part to start with.
             * @return Whether the string starts with the given start.
             */
            static bool StartsWith(const std::string& haystack, const std::string& needle);

            /**
             * @brief Split a string into parts with a given delimiter.
             * @param string The string to split.
             * @param delimiter The delimiter to split the string at.
             * @return A list of section of the string.
             */
            static std::vector<std::string> Split(const std::string& string, const std::string& delimiter);
    };
}

#endif
