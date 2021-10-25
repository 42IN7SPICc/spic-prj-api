std::weak_ptr<GameObject> parent;
std::vector<std::shared_ptr<GameObject>> children;

std::vector<std::shared_ptr<Component>> components;

public:
static std::vector<std::shared_ptr<GameObject>> All(bool includeInactive = false);
