static void DestroyListener(spic::IMouseListener* listener);

std::unique_ptr<spic::IMouseListener, decltype(&DestroyListener)> _listener;
