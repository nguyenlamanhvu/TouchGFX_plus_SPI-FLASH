#ifndef TEMPERATURE_SCREENPRESENTER_HPP
#define TEMPERATURE_SCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Temperature_ScreenView;

class Temperature_ScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Temperature_ScreenPresenter(Temperature_ScreenView& v);

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

    virtual ~Temperature_ScreenPresenter() {}

private:
    Temperature_ScreenPresenter();

    Temperature_ScreenView& view;
};

#endif // TEMPERATURE_SCREENPRESENTER_HPP
