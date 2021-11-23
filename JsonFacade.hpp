#ifndef API_JSONFACADE_HPP
#define API_JSONFACADE_HPP

#include <string>

namespace spic {
    class JsonFacade {
    public:
        template<class T>
        static T Deserialize(const std::string& jsonString);

        template<class T>
        static std::string Serialize(const T& object);
    };
}

#endif
