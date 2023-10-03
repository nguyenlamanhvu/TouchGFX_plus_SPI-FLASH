/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/co_screen_screen/CO_ScreenViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

CO_ScreenViewBase::CO_ScreenViewBase() :
    buttonCallback(this, &CO_ScreenViewBase::buttonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    background.setPosition(0, 0, 320, 240);
    background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(background);

    WhiteBackground.setBitmap(touchgfx::Bitmap(BITMAP_WHITE_ID));
    WhiteBackground.setPosition(33, 78, 253, 120);
    WhiteBackground.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    WhiteBackground.setAlpha(188);
    add(WhiteBackground);

    COToMain_Button.setXY(182, 204);
    COToMain_Button.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_ACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_PRESSED_ID));
    COToMain_Button.setLabelText(touchgfx::TypedText(T___SINGLEUSE_R7OK));
    COToMain_Button.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    COToMain_Button.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    COToMain_Button.setAction(buttonCallback);
    add(COToMain_Button);

    CO_Text.setXY(83, 23);
    CO_Text.setColor(touchgfx::Color::getColorFromRGB(252, 252, 252));
    CO_Text.setLinespacing(0);
    CO_Text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_L83Z));
    add(CO_Text);

    COIcon.setBitmap(touchgfx::Bitmap(BITMAP_ICONCO_ID));
    COIcon.setPosition(12, 12, 60, 60);
    COIcon.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(COIcon);

    COGraph.setPosition(33, 78, 253, 120);
    COGraph.setScale(1);
    COGraph.setGraphAreaMargin(5, 27, 0, 11);
    COGraph.setGraphAreaPadding(0, 0, 0, 0);
    COGraph.setGraphRangeY(0, 1000);
    COGraphMajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(5, 9, 10));
    COGraphMajorYAxisGrid.setInterval(100);
    COGraphMajorYAxisGrid.setLineWidth(1);
    COGraphMajorYAxisGrid.setScale(1);
    COGraph.addGraphElement(COGraphMajorYAxisGrid);

    COGraphMajorXAxisLabel.setInterval(10);
    COGraphMajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_WMEQ));
    COGraphMajorXAxisLabel.setColor(touchgfx::Color::getColorFromRGB(30, 84, 102));
    COGraphMajorXAxisLabel.setScale(1);
    COGraph.addBottomElement(COGraphMajorXAxisLabel);

    COGraphMajorYAxisLabel.setInterval(100);
    COGraphMajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_X5R4));
    COGraphMajorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(30, 84, 102));
    COGraphMajorYAxisLabel.setScale(1);
    COGraph.addLeftElement(COGraphMajorYAxisLabel);

    COGraphLine1Painter.setColor(touchgfx::Color::getColorFromRGB(8, 33, 41));
    COGraphLine1.setPainter(COGraphLine1Painter);
    COGraphLine1.setLineWidth(2);
    COGraph.addGraphElement(COGraphLine1);


    COGraph.addDataPoint(752.51691f);
    COGraph.addDataPoint(675.32419f);
    COGraph.addDataPoint(545.54892f);
    COGraph.addDataPoint(385.15932f);
    COGraph.addDataPoint(224.39498f);
    COGraph.addDataPoint(94.72307f);
    COGraph.addDataPoint(21.44887f);
    COGraph.addDataPoint(17.77693f);
    COGraph.addDataPoint(81.76695f);
    COGraph.addDataPoint(196.92206f);
    COGraph.addDataPoint(336.26086f);
    COGraph.addDataPoint(468.87511f);
    COGraph.addDataPoint(567.36927f);
    COGraph.addDataPoint(614.36568f);
    COGraph.addDataPoint(606.49057f);
    COGraph.addDataPoint(554.8759f);
    COGraph.addDataPoint(482.06692f);
    COGraph.addDataPoint(416.10732f);
    COGraph.addDataPoint(383.26578f);
    COGraph.addDataPoint(401.20108f);
    COGraph.addDataPoint(474.25517f);
    COGraph.addDataPoint(592.04193f);
    COGraph.addDataPoint(731.69107f);
    COGraph.addDataPoint(863.20964f);
    COGraph.addDataPoint(956.65798f);
    COGraph.addDataPoint(989.3899f);
    COGraph.addDataPoint(951.5879f);
    COGraph.addDataPoint(848.73879f);
    COGraph.addDataPoint(700.44057f);
    COGraph.addDataPoint(535.82667f);
    COGraph.addDataPoint(386.7192f);
    COGraph.addDataPoint(280.17584f);
    COGraph.addDataPoint(232.24192f);
    COGraph.addDataPoint(244.42222f);
    COGraph.addDataPoint(303.72042f);
    COGraph.addDataPoint(386.22031f);
    COGraph.addDataPoint(463.31594f);
    COGraph.addDataPoint(509.05056f);
    COGraph.addDataPoint(506.75403f);
    COGraph.addDataPoint(453.34239f);
    COGraph.addDataPoint(360.21833f);
    COGraph.addDataPoint(250.54616f);
    COGraph.addDataPoint(153.56583f);
    COGraph.addDataPoint(97.33878f);
    COGraph.addDataPoint(101.70538f);
    COGraph.addDataPoint(173.18519f);
    COGraph.addDataPoint(303.07819f);
    COGraph.addDataPoint(469.244f);
    COGraph.addDataPoint(641.13741f);
    COGraph.addDataPoint(786.88277f);
    COGraph.addDataPoint(880.67121f);
    COGraph.addDataPoint(908.68587f);
    COGraph.addDataPoint(872.12015f);
    COGraph.addDataPoint(786.5645f);
    COGraph.addDataPoint(677.9247f);
    COGraph.addDataPoint(575.88153f);
    COGraph.addDataPoint(506.50101f);
    COGraph.addDataPoint(485.80937f);
    COGraph.addDataPoint(515.90761f);
    COGraph.addDataPoint(584.57524f);
    COGraph.addDataPoint(668.45575f);
    COGraph.addDataPoint(739.03597f);
    COGraph.addDataPoint(769.94508f);
    COGraph.addDataPoint(743.77351f);
    COGraph.addDataPoint(656.72779f);
    COGraph.addDataPoint(519.966f);
    COGraph.addDataPoint(357.27067f);
    COGraph.addDataPoint(199.61278f);
    COGraph.addDataPoint(77.9223f);
    COGraph.addDataPoint(15.82122f);
    COGraph.addDataPoint(24.08615f);
    COGraph.addDataPoint(98.18634f);
    COGraph.addDataPoint(219.49292f);
    COGraph.addDataPoint(359.85931f);
    COGraph.addDataPoint(488.45054f);
    COGraph.addDataPoint(579.15193f);
    COGraph.addDataPoint(616.74882f);
    COGraph.addDataPoint(600.37294f);
    COGraph.addDataPoint(543.38257f);
    COGraph.addDataPoint(469.7193f);
    COGraph.addDataPoint(407.64806f);
    COGraph.addDataPoint(382.4291f);
    COGraph.addDataPoint(409.73217f);
    COGraph.addDataPoint(491.42148f);
    COGraph.addDataPoint(614.75851f);
    COGraph.addDataPoint(755.23126f);
    COGraph.addDataPoint(882.32904f);
    COGraph.addDataPoint(966.85778f);
    COGraph.addDataPoint(988.01105f);
    COGraph.addDataPoint(938.46862f);
    COGraph.addDataPoint(826.27408f);
    COGraph.addDataPoint(673.02837f);
    COGraph.addDataPoint(508.83509f);
    COGraph.addDataPoint(365.22572f);
    COGraph.addDataPoint(267.78525f);
    COGraph.addDataPoint(230.26979f);
    COGraph.addDataPoint(251.64129f);
    COGraph.addDataPoint(316.7293f);
    COGraph.addDataPoint(400.34134f);
    COGraph.addDataPoint(473.8f);
    add(COGraph);
}

CO_ScreenViewBase::~CO_ScreenViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void CO_ScreenViewBase::setupScreen()
{

}

void CO_ScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &COToMain_Button)
    {
        //COToMain
        //When COToMain_Button clicked change screen to Main
        //Go to Main with screen transition towards West
        application().gotoMainScreenSlideTransitionWest();
    }
}