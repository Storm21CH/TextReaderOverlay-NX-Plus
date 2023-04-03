#pragma once

#include <tesla.hpp>

class MainMenu : public tsl::Gui {
public:
    MainMenu() : m_debug(false) {}

    tsl::elm::Element* createUI() override;
    bool handleInput(u64 keysDown, u64 keysHeld, const HidTouchState &touchPos, HidAnalogStickState joyStickPosLeft, HidAnalogStickState joyStickPosRight) override;

private:
    tsl::elm::List* m_menuItems;
    bool m_debug;
};
