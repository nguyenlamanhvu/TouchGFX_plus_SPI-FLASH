#ifndef CO_SCREENVIEW_HPP
#define CO_SCREENVIEW_HPP

#include <gui_generated/co_screen_screen/CO_ScreenViewBase.hpp>
#include <gui/co_screen_screen/CO_ScreenPresenter.hpp>

class CO_ScreenView : public CO_ScreenViewBase
{
public:
    CO_ScreenView();
    virtual ~CO_ScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CO_SCREENVIEW_HPP
