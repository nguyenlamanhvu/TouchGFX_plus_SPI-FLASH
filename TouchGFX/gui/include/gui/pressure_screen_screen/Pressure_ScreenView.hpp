#ifndef PRESSURE_SCREENVIEW_HPP
#define PRESSURE_SCREENVIEW_HPP

#include <gui_generated/pressure_screen_screen/Pressure_ScreenViewBase.hpp>
#include <gui/pressure_screen_screen/Pressure_ScreenPresenter.hpp>

class Pressure_ScreenView : public Pressure_ScreenViewBase
{
public:
    Pressure_ScreenView();
    virtual ~Pressure_ScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PRESSURE_SCREENVIEW_HPP
