#ifndef API_JSONFACADE_HPP
#define API_JSONFACADE_HPP

#include <string>

namespace spic {
    /**
     * @brief Class for serializing and desrializing json files.
     */
    class JsonFacade {
    public:
        /**
         * @brief Deserialize a json string to a given object.
         * @param jsonString The string containing the json.
         * @return The object containing the values from the json.
         */
        template<class T>
        static T Deserialize(const std::string& jsonString);

        /**
         * @brief Serialize a given object to a json string.
         * @param object The object containing the data.
         * @return The json string containing the values from the object.
         */
        template<class T>
        static std::string Serialize(const T& object);
    };
}

#if __has_include("JsonFacade_templates.hpp")
#include "JsonFacade_templates.hpp"
#endif

#endif
