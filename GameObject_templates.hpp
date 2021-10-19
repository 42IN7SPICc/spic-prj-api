#include "GameObject.hpp"

template<class T>
std::shared_ptr<spic::GameObject> spic::GameObject::FindObjectOfType(bool includeInactive) {
    for (std::shared_ptr<spic::GameObject> gameObject: All(includeInactive))
    {
        try
        {
            auto objectPtr = std::dynamic_pointer_cast<T>(gameObject);
            if (objectPtr) return objectPtr;
        }
        catch (const std::bad_cast&)
        {
            // do nothing
        }
    }

    return nullptr;
}

template<class T>
std::vector<std::shared_ptr<spic::GameObject>> spic::GameObject::FindObjectsOfType(bool includeInactive) {
    std::vector<std::shared_ptr<T>> typeObjects;

    for (std::shared_ptr<spic::GameObject> gameObject: All(includeInactive))
    {
        try
        {
            auto objectPtr = std::dynamic_pointer_cast<T>(gameObject);
            if (objectPtr) typeObjects.insert(objectPtr);
        }
        catch (const std::bad_cast&)
        {
            // do nothing
        }
    }

    return typeObjects;
}

template<class T>
void spic::GameObject::AddComponent(std::shared_ptr<spic::Component> component) {

}

template<class T>
std::shared_ptr<spic::Component> spic::GameObject::GetComponent() const {

}

template<class T>
std::shared_ptr<spic::Component> spic::GameObject::GetComponentInChildren() const {

}

template<class T>
std::shared_ptr<spic::Component> spic::GameObject::GetComponentInParent() const {

}

template<class T>
std::vector<std::shared_ptr<spic::Component>> spic::GameObject::GetComponents() const {

}

template<class T>
std::vector<std::shared_ptr<spic::Component>> spic::GameObject::GetComponentsInChildren() const {

}

template<class T>
std::vector<std::shared_ptr<spic::Component>> spic::GameObject::GetComponentsInParent() const {

}