#ifndef TEMPERATURE_SCREENVIEW_HPP
#define TEMPERATURE_SCREENVIEW_HPP

#include <gui_generated/temperature_screen_screen/Temperature_ScreenViewBase.hpp>
#include <gui/temperature_screen_screen/Temperature_ScreenPresenter.hpp>

class Temperature_ScreenView : public Temperature_ScreenViewBase
{
public:
    Temperature_ScreenView();
    virtual ~Temperature_ScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TEMPERATURE_SCREENVIEW_HPP
