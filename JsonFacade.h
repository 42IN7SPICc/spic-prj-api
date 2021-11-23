#ifndef API_JSONFACADE_H
#define API_JSONFACADE_H

#include <string>

namespace spic {
    class JsonFacade {
    public:
        template<class T>
        T Deserialize(const std::string &jsonString);

        template<class T>
        std::string Deserialize(const T &object);
    };
}


#endif
