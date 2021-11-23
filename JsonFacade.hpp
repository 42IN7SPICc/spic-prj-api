#ifndef API_JSONFACADE_HPP
#define API_JSONFACADE_HPP

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
