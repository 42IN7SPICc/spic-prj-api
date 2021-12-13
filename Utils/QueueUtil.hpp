#ifndef SPIC_QUEUEUTIL_HPP
#define SPIC_QUEUEUTIL_HPP

#include <queue>
#include <stack>

namespace spic
{
    /**
     * @brief A util for std queue.
     */
    class QueueUtil
    {
        public:
            /**
             * @brief Reverse a queue.
             * @param queue The queue that needs reversing
             * @return A reversed queue.
             */
            template<class T>
            static void Reverse(std::queue<T>& queue);
    };
}


#endif //SPIC_QUEUEUTIL_HPP
