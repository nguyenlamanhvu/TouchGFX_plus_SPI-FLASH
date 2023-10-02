// 4.22.0 0xd3e94f91
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_background[]; // BITMAP_BACKGROUND_ID = 0, Size: 320x240 pixels
extern const unsigned char image_hcmut[]; // BITMAP_HCMUT_ID = 1, Size: 100x70 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_background, 0, 320, 240, 0, 0, 320, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 240, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_hcmut, 0, 100, 70, 45, 15, 21, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 33, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
