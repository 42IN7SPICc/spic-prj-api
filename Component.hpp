#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <memory>

#if __has_include("Component_includes.hpp")
#include "Component_includes.hpp"
#endif

namespace spic {

    class GameObject;

    /**
     * @brief Base class for all components.
     * @spicapi
     */
    class Component {
        public:
            /**
             * @brief Getter for active status.
             * @return true if active, false otherwise.
             * @spicapi
             */
            bool Active() const { return active; }

            /**
             * @brief flag New active status.
             * @spicapi
             */
            void Active(bool flag) { active = flag; }

            /**
             * @brief The parent of this component
             * @param parent the current parent
             * @sharedapi
             */
            std::weak_ptr<spic::GameObject> GameObject() const;

            /**
             * @brief The parent of this component
             * @param parent the new parent
             * @sharedapi
             */
            void GameObject(std::weak_ptr<spic::GameObject> gameObject);

        private:
            /**
             * @brief Active status.
             * @spicapi
             */
            bool active;

#if __has_include("Component_private.hpp")
#include "Component_private.hpp"
#endif
    };

}

#endif // COMPONENT_H_
