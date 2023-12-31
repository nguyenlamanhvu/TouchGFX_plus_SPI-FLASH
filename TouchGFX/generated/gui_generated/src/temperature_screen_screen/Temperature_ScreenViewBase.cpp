/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/temperature_screen_screen/Temperature_ScreenViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Temperature_ScreenViewBase::Temperature_ScreenViewBase() :
    buttonCallback(this, &Temperature_ScreenViewBase::buttonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    background.setPosition(0, 0, 320, 240);
    background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(background);

    TemperatureToMain_Button.setXY(182, 204);
    TemperatureToMain_Button.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_ACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_PRESSED_ID));
    TemperatureToMain_Button.setLabelText(touchgfx::TypedText(T___SINGLEUSE_9LCS));
    TemperatureToMain_Button.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    TemperatureToMain_Button.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    TemperatureToMain_Button.setAction(buttonCallback);
    add(TemperatureToMain_Button);

    Temperature_Text.setXY(72, 23);
    Temperature_Text.setColor(touchgfx::Color::getColorFromRGB(252, 252, 252));
    Temperature_Text.setLinespacing(0);
    Temperature_Text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_SJMZ));
    add(Temperature_Text);

    TemperatureIcon.setBitmap(touchgfx::Bitmap(BITMAP_ICONTEMPERATURE_ID));
    TemperatureIcon.setPosition(12, 12, 60, 60);
    TemperatureIcon.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(TemperatureIcon);

    WhiteBackground.setBitmap(touchgfx::Bitmap(BITMAP_WHITE_ID));
    WhiteBackground.setPosition(42, 78, 234, 120);
    WhiteBackground.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    WhiteBackground.setAlpha(188);
    add(WhiteBackground);

    TemperatureGraph.setPosition(42, 78, 234, 120);
    TemperatureGraph.setScale(1);
    TemperatureGraph.setGraphAreaMargin(5, 20, 0, 11);
    TemperatureGraph.setGraphAreaPadding(0, 0, 0, 0);
    TemperatureGraph.setGraphRangeY(0, 120);
    TemperatureGraphMajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(5, 9, 10));
    TemperatureGraphMajorYAxisGrid.setInterval(12);
    TemperatureGraphMajorYAxisGrid.setLineWidth(1);
    TemperatureGraphMajorYAxisGrid.setScale(1);
    TemperatureGraph.addGraphElement(TemperatureGraphMajorYAxisGrid);

    TemperatureGraphMajorXAxisLabel.setInterval(10);
    TemperatureGraphMajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_JXCB));
    TemperatureGraphMajorXAxisLabel.setColor(touchgfx::Color::getColorFromRGB(30, 84, 102));
    TemperatureGraphMajorXAxisLabel.setScale(1);
    TemperatureGraph.addBottomElement(TemperatureGraphMajorXAxisLabel);

    TemperatureGraphMajorYAxisLabel.setInterval(12);
    TemperatureGraphMajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_M75E));
    TemperatureGraphMajorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(30, 84, 102));
    TemperatureGraphMajorYAxisLabel.setScale(1);
    TemperatureGraph.addLeftElement(TemperatureGraphMajorYAxisLabel);

    TemperatureGraphLine1Painter.setColor(touchgfx::Color::getColorFromRGB(8, 33, 41));
    TemperatureGraphLine1.setPainter(TemperatureGraphLine1Painter);
    TemperatureGraphLine1.setLineWidth(2);
    TemperatureGraph.addGraphElement(TemperatureGraphLine1);


    TemperatureGraph.addDataPoint(90.30203f);
    TemperatureGraph.addDataPoint(81.0389f);
    TemperatureGraph.addDataPoint(65.46587f);
    TemperatureGraph.addDataPoint(46.21912f);
    TemperatureGraph.addDataPoint(26.9274f);
    TemperatureGraph.addDataPoint(11.36677f);
    TemperatureGraph.addDataPoint(2.57386f);
    TemperatureGraph.addDataPoint(2.13323f);
    TemperatureGraph.addDataPoint(9.81203f);
    TemperatureGraph.addDataPoint(23.63065f);
    TemperatureGraph.addDataPoint(40.3513f);
    TemperatureGraph.addDataPoint(56.26501f);
    TemperatureGraph.addDataPoint(68.08431f);
    TemperatureGraph.addDataPoint(73.72388f);
    TemperatureGraph.addDataPoint(72.77887f);
    TemperatureGraph.addDataPoint(66.58511f);
    TemperatureGraph.addDataPoint(57.84803f);
    TemperatureGraph.addDataPoint(49.93288f);
    TemperatureGraph.addDataPoint(45.99189f);
    TemperatureGraph.addDataPoint(48.14413f);
    TemperatureGraph.addDataPoint(56.91062f);
    TemperatureGraph.addDataPoint(71.04503f);
    TemperatureGraph.addDataPoint(87.80293f);
    TemperatureGraph.addDataPoint(103.58516f);
    TemperatureGraph.addDataPoint(114.79896f);
    TemperatureGraph.addDataPoint(118.72679f);
    TemperatureGraph.addDataPoint(114.19055f);
    TemperatureGraph.addDataPoint(101.84866f);
    TemperatureGraph.addDataPoint(84.05287f);
    TemperatureGraph.addDataPoint(64.2992f);
    TemperatureGraph.addDataPoint(46.4063f);
    TemperatureGraph.addDataPoint(33.6211f);
    TemperatureGraph.addDataPoint(27.86903f);
    TemperatureGraph.addDataPoint(29.33067f);
    TemperatureGraph.addDataPoint(36.44645f);
    TemperatureGraph.addDataPoint(46.34644f);
    TemperatureGraph.addDataPoint(55.59791f);
    TemperatureGraph.addDataPoint(61.08607f);
    TemperatureGraph.addDataPoint(60.81048f);
    TemperatureGraph.addDataPoint(54.40109f);
    TemperatureGraph.addDataPoint(43.2262f);
    TemperatureGraph.addDataPoint(30.06554f);
    TemperatureGraph.addDataPoint(18.4279f);
    TemperatureGraph.addDataPoint(11.68065f);
    TemperatureGraph.addDataPoint(12.20465f);
    TemperatureGraph.addDataPoint(20.78222f);
    TemperatureGraph.addDataPoint(36.36938f);
    TemperatureGraph.addDataPoint(56.30928f);
    TemperatureGraph.addDataPoint(76.93649f);
    TemperatureGraph.addDataPoint(94.42593f);
    TemperatureGraph.addDataPoint(105.68054f);
    TemperatureGraph.addDataPoint(109.0423f);
    TemperatureGraph.addDataPoint(104.65442f);
    TemperatureGraph.addDataPoint(94.38774f);
    TemperatureGraph.addDataPoint(81.35096f);
    TemperatureGraph.addDataPoint(69.10578f);
    TemperatureGraph.addDataPoint(60.78012f);
    TemperatureGraph.addDataPoint(58.29712f);
    TemperatureGraph.addDataPoint(61.90891f);
    TemperatureGraph.addDataPoint(70.14903f);
    TemperatureGraph.addDataPoint(80.21469f);
    TemperatureGraph.addDataPoint(88.68432f);
    TemperatureGraph.addDataPoint(92.39341f);
    TemperatureGraph.addDataPoint(89.25282f);
    TemperatureGraph.addDataPoint(78.80734f);
    TemperatureGraph.addDataPoint(62.39592f);
    TemperatureGraph.addDataPoint(42.87248f);
    TemperatureGraph.addDataPoint(23.95353f);
    TemperatureGraph.addDataPoint(9.35068f);
    TemperatureGraph.addDataPoint(1.89855f);
    TemperatureGraph.addDataPoint(2.89034f);
    TemperatureGraph.addDataPoint(11.78236f);
    TemperatureGraph.addDataPoint(26.33915f);
    TemperatureGraph.addDataPoint(43.18312f);
    TemperatureGraph.addDataPoint(58.61406f);
    TemperatureGraph.addDataPoint(69.49823f);
    TemperatureGraph.addDataPoint(74.00986f);
    TemperatureGraph.addDataPoint(72.04475f);
    TemperatureGraph.addDataPoint(65.20591f);
    TemperatureGraph.addDataPoint(56.36632f);
    TemperatureGraph.addDataPoint(48.91777f);
    TemperatureGraph.addDataPoint(45.89149f);
    TemperatureGraph.addDataPoint(49.16786f);
    TemperatureGraph.addDataPoint(58.97058f);
    TemperatureGraph.addDataPoint(73.77102f);
    TemperatureGraph.addDataPoint(90.62775f);
    TemperatureGraph.addDataPoint(105.87949f);
    TemperatureGraph.addDataPoint(116.02293f);
    TemperatureGraph.addDataPoint(118.56133f);
    TemperatureGraph.addDataPoint(112.61623f);
    TemperatureGraph.addDataPoint(99.15289f);
    TemperatureGraph.addDataPoint(80.7634f);
    TemperatureGraph.addDataPoint(61.06021f);
    TemperatureGraph.addDataPoint(43.82709f);
    TemperatureGraph.addDataPoint(32.13423f);
    TemperatureGraph.addDataPoint(27.63237f);
    TemperatureGraph.addDataPoint(30.19696f);
    TemperatureGraph.addDataPoint(38.00752f);
    TemperatureGraph.addDataPoint(48.04096f);
    TemperatureGraph.addDataPoint(56.856f);
    add(TemperatureGraph);
}

Temperature_ScreenViewBase::~Temperature_ScreenViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void Temperature_ScreenViewBase::setupScreen()
{

}

void Temperature_ScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &TemperatureToMain_Button)
    {
        //TemperatureToMain
        //When TemperatureToMain_Button clicked change screen to Main
        //Go to Main with screen transition towards West
        application().gotoMainScreenSlideTransitionWest();
    }
}
