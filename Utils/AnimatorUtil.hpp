#ifndef SPIC_ANIMATORUTIL_HPP
#define SPIC_ANIMATORUTIL_HPP

#include "Sprite.hpp"

#include <memory>
#include <string>
#include <vector>

namespace spic
{
    namespace types
    {
        using sprite_vector = std::vector<std::shared_ptr<spic::Sprite>>;
    }

    /**
     * @brief A util for animators
     */
    class AnimatorUtil
    {
        public:
            /**
             * @brief Create a list of sprites by a given file template.
             * @param max The amount of sprites.
             * @param prefix The path to put in front of the index.
             * @param sortingLayer The sorting layer for the sprites.
             * @param extension The file extension to place after the prefix and index.
             * @param flipX Whether to flip to sprite on the X-axis.
             * @param flipY Whether to flip to sprite on the Y-axis.
             * @param orderLayer The order layer for the sprites.
             * @return A list of sprites.
             */
            static types::sprite_vector CreateSpriteVector(int max, const std::string& prefix, int sortingLayer = 0, const std::string& extension = ".png", bool flipX = false, bool flipY = false, int orderLayer = 0);

            /**
             * @brief Create a list of sprites by a given file template and color.
             * @param max The amount of sprites.
             * @param prefix The path to put in front of the index.
             * @param color The color change for the sprite
             * @param sortingLayer The sorting layer for the sprites.
             * @param extension The file extension to place after the prefix and index.
             * @param flipX Whether to flip to sprite on the X-axis.
             * @param flipY Whether to flip to sprite on the Y-axis.
             * @param orderLayer The order layer for the sprites.
             * @return A list of sprites.
             */
            static types::sprite_vector CreateSpriteVector(int max, const std::string& prefix, spic::Color color, int sortingLayer = 0, const std::string& extension = ".png", bool flipX = false, bool flipY = false, int orderLayer = 0);
    };
}

#endif //SPIC_ANIMATORUTIL_HPP
