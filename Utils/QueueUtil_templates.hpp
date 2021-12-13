#ifndef API_QUEUEUTIL_TEMPLATES_HPP
#define API_QUEUEUTIL_TEMPLATES_HPP

#include "QueueUtil.hpp"

template<class T>
void spic::QueueUtil::Reverse(std::queue<T>& queue)
{
    std::stack<T> stack;

    while (!queue.empty())
    {
        stack.push(queue.front());
        queue.pop();
    }

    while (!stack.empty())
    {
        queue.push(stack.top());
        stack.pop();
    }
}

#endif //API_QUEUEUTIL_TEMPLATES_HPP
