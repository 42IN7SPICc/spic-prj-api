std::weak_ptr<GameObject> _parent;
std::vector<std::shared_ptr<GameObject>> _children;
std::vector<std::shared_ptr<Component>> _components;
spic::Transform& _transform;