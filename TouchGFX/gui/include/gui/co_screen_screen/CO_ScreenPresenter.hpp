#ifndef CO_SCREENPRESENTER_HPP
#define CO_SCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class CO_ScreenView;

class CO_ScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    CO_ScreenPresenter(CO_ScreenView& v);

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

    virtual ~CO_ScreenPresenter() {}

private:
    CO_ScreenPresenter();

    CO_ScreenView& view;
};

#endif // CO_SCREENPRESENTER_HPP
