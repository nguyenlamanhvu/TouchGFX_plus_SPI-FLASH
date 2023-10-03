#ifndef RTC_SCREENPRESENTER_HPP
#define RTC_SCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class RTC_ScreenView;

class RTC_ScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    RTC_ScreenPresenter(RTC_ScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~RTC_ScreenPresenter() {}

private:
    RTC_ScreenPresenter();

    RTC_ScreenView& view;
};

#endif // RTC_SCREENPRESENTER_HPP
