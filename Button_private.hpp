static void DestoryListener(spic::IMouseListener* listener);

std::unique_ptr<spic::IMouseListener, decltype(DestoryListener)> _listener;
