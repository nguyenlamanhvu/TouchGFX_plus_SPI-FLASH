/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainViewBase::MainViewBase() :
    flexButtonCallback(this, &MainViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    background.setPosition(0, 0, 320, 240);
    background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(background);

    RTC_button.setBoxWithBorderPosition(0, 0, 160, 59);
    RTC_button.setBorderSize(5);
    RTC_button.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    RTC_button.setAction(flexButtonCallback);
    RTC_button.setPosition(0, 103, 160, 59);
    add(RTC_button);

    CO_button.setBoxWithBorderPosition(0, 0, 160, 59);
    CO_button.setBorderSize(5);
    CO_button.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    CO_button.setAction(flexButtonCallback);
    CO_button.setPosition(160, 181, 160, 59);
    add(CO_button);

    Temperature_button.setBoxWithBorderPosition(0, 0, 160, 59);
    Temperature_button.setBorderSize(5);
    Temperature_button.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Temperature_button.setAction(flexButtonCallback);
    Temperature_button.setPosition(160, 103, 160, 59);
    add(Temperature_button);

    Pressure_button.setBoxWithBorderPosition(0, 0, 160, 59);
    Pressure_button.setBorderSize(5);
    Pressure_button.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    Pressure_button.setAction(flexButtonCallback);
    Pressure_button.setPosition(0, 181, 160, 59);
    add(Pressure_button);

    HCMUT_logo.setBitmap(touchgfx::Bitmap(BITMAP_HCMUT_ID));
    HCMUT_logo.setPosition(-18, 11, 114, 80);
    HCMUT_logo.setScalingAlgorithm(touchgfx::ScalableImage::BILINEAR_INTERPOLATION);
    add(HCMUT_logo);

    RTC_text.setXY(56, 118);
    RTC_text.setColor(touchgfx::Color::getColorFromRGB(18, 6, 6));
    RTC_text.setLinespacing(0);
    RTC_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_OKXZ));
    add(RTC_text);

    Car_systems_text.setXY(90, 28);
    Car_systems_text.setColor(touchgfx::Color::getColorFromRGB(232, 209, 209));
    Car_systems_text.setLinespacing(0);
    Car_systems_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_Z9NE));
    add(Car_systems_text);

    CO_text.setXY(177, 196);
    CO_text.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    CO_text.setLinespacing(0);
    CO_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_5A2F));
    add(CO_text);

    Temperature_text.setXY(165, 118);
    Temperature_text.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Temperature_text.setLinespacing(0);
    Temperature_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_5XO7));
    add(Temperature_text);

    Pressure_text.setXY(29, 196);
    Pressure_text.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Pressure_text.setLinespacing(0);
    Pressure_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9FPZ));
    add(Pressure_text);
}

MainViewBase::~MainViewBase()
{

}

void MainViewBase::setupScreen()
{

}

void MainViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &RTC_button)
    {
        //MainToRTC
        //When RTC_button clicked change screen to RTC_Screen
        //Go to RTC_Screen with screen transition towards East
        application().gotoRTC_ScreenScreenSlideTransitionEast();
    }
    if (&src == &Temperature_button)
    {
        //MainToTemperature
        //When Temperature_button clicked change screen to Temperature_Screen
        //Go to Temperature_Screen with screen transition towards East
        application().gotoTemperature_ScreenScreenSlideTransitionEast();
    }
    if (&src == &Pressure_button)
    {
        //MainToPressure
        //When Pressure_button clicked change screen to Pressure_Screen
        //Go to Pressure_Screen with screen transition towards East
        application().gotoPressure_ScreenScreenSlideTransitionEast();
    }
    if (&src == &CO_button)
    {
        //MainToCO
        //When CO_button clicked change screen to CO_Screen
        //Go to CO_Screen with screen transition towards East
        application().gotoCO_ScreenScreenSlideTransitionEast();
    }
}
