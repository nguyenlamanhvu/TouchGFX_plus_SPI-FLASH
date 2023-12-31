################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/BitmapDatabase.cpp \
../TouchGFX/generated/images/src/SVGDatabase.cpp \
../TouchGFX/generated/images/src/image_HCMUT.cpp \
../TouchGFX/generated/images/src/image_IconCO.cpp \
../TouchGFX/generated/images/src/image_IconDongHo.cpp \
../TouchGFX/generated/images/src/image_IconPressure.cpp \
../TouchGFX/generated/images/src/image_IconTemperature.cpp \
../TouchGFX/generated/images/src/image_background.cpp \
../TouchGFX/generated/images/src/image_white.cpp 

OBJS += \
./TouchGFX/generated/images/src/BitmapDatabase.o \
./TouchGFX/generated/images/src/SVGDatabase.o \
./TouchGFX/generated/images/src/image_HCMUT.o \
./TouchGFX/generated/images/src/image_IconCO.o \
./TouchGFX/generated/images/src/image_IconDongHo.o \
./TouchGFX/generated/images/src/image_IconPressure.o \
./TouchGFX/generated/images/src/image_IconTemperature.o \
./TouchGFX/generated/images/src/image_background.o \
./TouchGFX/generated/images/src/image_white.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/BitmapDatabase.d \
./TouchGFX/generated/images/src/SVGDatabase.d \
./TouchGFX/generated/images/src/image_HCMUT.d \
./TouchGFX/generated/images/src/image_IconCO.d \
./TouchGFX/generated/images/src/image_IconDongHo.d \
./TouchGFX/generated/images/src/image_IconPressure.d \
./TouchGFX/generated/images/src/image_IconTemperature.d \
./TouchGFX/generated/images/src/image_background.d \
./TouchGFX/generated/images/src/image_white.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/%.o TouchGFX/generated/images/src/%.su TouchGFX/generated/images/src/%.cyclo: ../TouchGFX/generated/images/src/%.cpp TouchGFX/generated/images/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src

clean-TouchGFX-2f-generated-2f-images-2f-src:
	-$(RM) ./TouchGFX/generated/images/src/BitmapDatabase.cyclo ./TouchGFX/generated/images/src/BitmapDatabase.d ./TouchGFX/generated/images/src/BitmapDatabase.o ./TouchGFX/generated/images/src/BitmapDatabase.su ./TouchGFX/generated/images/src/SVGDatabase.cyclo ./TouchGFX/generated/images/src/SVGDatabase.d ./TouchGFX/generated/images/src/SVGDatabase.o ./TouchGFX/generated/images/src/SVGDatabase.su ./TouchGFX/generated/images/src/image_HCMUT.cyclo ./TouchGFX/generated/images/src/image_HCMUT.d ./TouchGFX/generated/images/src/image_HCMUT.o ./TouchGFX/generated/images/src/image_HCMUT.su ./TouchGFX/generated/images/src/image_IconCO.cyclo ./TouchGFX/generated/images/src/image_IconCO.d ./TouchGFX/generated/images/src/image_IconCO.o ./TouchGFX/generated/images/src/image_IconCO.su ./TouchGFX/generated/images/src/image_IconDongHo.cyclo ./TouchGFX/generated/images/src/image_IconDongHo.d ./TouchGFX/generated/images/src/image_IconDongHo.o ./TouchGFX/generated/images/src/image_IconDongHo.su ./TouchGFX/generated/images/src/image_IconPressure.cyclo ./TouchGFX/generated/images/src/image_IconPressure.d ./TouchGFX/generated/images/src/image_IconPressure.o ./TouchGFX/generated/images/src/image_IconPressure.su ./TouchGFX/generated/images/src/image_IconTemperature.cyclo ./TouchGFX/generated/images/src/image_IconTemperature.d ./TouchGFX/generated/images/src/image_IconTemperature.o ./TouchGFX/generated/images/src/image_IconTemperature.su ./TouchGFX/generated/images/src/image_background.cyclo ./TouchGFX/generated/images/src/image_background.d ./TouchGFX/generated/images/src/image_background.o ./TouchGFX/generated/images/src/image_background.su ./TouchGFX/generated/images/src/image_white.cyclo ./TouchGFX/generated/images/src/image_white.d ./TouchGFX/generated/images/src/image_white.o ./TouchGFX/generated/images/src/image_white.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src

