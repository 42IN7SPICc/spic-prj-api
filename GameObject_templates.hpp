#include "GameObject.hpp"

template<class T>
std::shared_ptr<T> spic::GameObject::FindObjectOfType(bool includeInactive) {
    for (std::shared_ptr<spic::GameObject> gameObject: All(includeInactive))
    {
        auto objectPtr = std::dynamic_pointer_cast<T>(gameObject);
        if (objectPtr) return objectPtr;
    }

    return std::shared_ptr<T>{};
}

template<class T>
std::vector<std::shared_ptr<T>> spic::GameObject::FindObjectsOfType(bool includeInactive) {
    std::vector<std::shared_ptr<T>> typeObjects;

    for (std::shared_ptr<spic::GameObject> gameObject: All(includeInactive))
    {
        auto objectPtr = std::dynamic_pointer_cast<T>(gameObject);
        if (objectPtr) typeObjects.insert(objectPtr);
    }

    return typeObjects;
}

template<class T>
void spic::GameObject::AddComponent(std::shared_ptr<T> component) {
    component->Active(true);
    components.push_back(component);
}

template<class T>
std::shared_ptr<T> spic::GameObject::GetComponent() const {
    for (std::shared_ptr<spic::Component> component: components)
    {
        auto componentPtr = std::dynamic_pointer_cast<T>(component);
        if (componentPtr) return componentPtr;
    }

    return std::shared_ptr<T>{};
}

template<class T>
std::vector<std::shared_ptr<T>> spic::GameObject::GetComponents() const {
    std::vector<std::shared_ptr<spic::Component>> typeComponents;

    for (std::shared_ptr<spic::Component> component: components)
    {
        auto componentPtr = std::dynamic_pointer_cast<T>(component);
        if (componentPtr) typeComponents.push_back(componentPtr);
    }

    return typeComponents;
}

template<class T>
std::shared_ptr<T> spic::GameObject::GetComponentInChildren() const {
    for (const std::shared_ptr<spic::GameObject>& child: children)
    {
        if (child) return child->GetComponent<T>();
    }

    return std::shared_ptr<T>{};
}

template<class T>
std::shared_ptr<T> spic::GameObject::GetComponentInParent() const {
    return !parent.expired() ? parent.lock()->GetComponent<T>() : std::shared_ptr<T>{};
}

template<class T>
std::vector<std::shared_ptr<T>> spic::GameObject::GetComponentsInChildren() const {
    std::vector<std::shared_ptr<spic::Component>> childComponents;

    for (const std::shared_ptr<spic::GameObject>& child: children)
    {
        if (child)
        {
            auto components = child->GetComponents<T>();
            childComponents.insert(childComponents.end(), components.begin(), components.end());
        }
    }

    return childComponents;
}

template<class T>
std::vector<std::shared_ptr<T>> spic::GameObject::GetComponentsInParent() const {
    return !parent.expired() ? parent.lock()->GetComponents<T>() : std::vector<std::shared_ptr<T>>{};
}