std::shared_ptr<GameObject> parent;
std::vector<std::shared_ptr<GameObject>> children;

static std::vector<std::shared_ptr<GameObject>> All(bool includeInactive = false);