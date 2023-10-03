#ifndef RTC_SCREENVIEW_HPP
#define RTC_SCREENVIEW_HPP

#include <gui_generated/rtc_screen_screen/RTC_ScreenViewBase.hpp>
#include <gui/rtc_screen_screen/RTC_ScreenPresenter.hpp>

class RTC_ScreenView : public RTC_ScreenViewBase
{
public:
    RTC_ScreenView();
    virtual ~RTC_ScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // RTC_SCREENVIEW_HPP
