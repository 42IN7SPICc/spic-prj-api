#ifndef SPIC_GAMEOBJECTUTIL_HPP
#define SPIC_GAMEOBJECTUTIL_HPP

#include <memory>
#include "GameObject.hpp"

namespace spic
{
    /**
     * @brief A util linking components and children to game objects.
     */
    class GameObjectUtil
    {
        public:
            /**
             * @brief Link a component to a given game object.
             * @param gameObject The game object to link the component to.
             * @param component The component to link.
             */
            static void LinkComponent(const std::shared_ptr<spic::GameObject>& gameObject, const std::shared_ptr<spic::Component>& component);

            /**
             * @brief Link a game object to a given game object.
             * @param parent The game object to link the child to.
             * @param child The child game object to link.
             */
            static void LinkChild(const std::shared_ptr<spic::GameObject>& parent, const std::shared_ptr<spic::GameObject>& child);
    };
}

#endif
