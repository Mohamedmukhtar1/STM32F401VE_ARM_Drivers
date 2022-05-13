################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/SRC_APP/main.c 

OBJS += \
./Src/SRC_APP/main.o 

C_DEPS += \
./Src/SRC_APP/main.d 


# Each subdirectory must supply rules for building sources it contributes
Src/SRC_APP/%.o Src/SRC_APP/%.su: ../Src/SRC_APP/%.c Src/SRC_APP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32 -DSTM32F4 -DSTM32F401VETx -c -I../Inc -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-SRC_APP

clean-Src-2f-SRC_APP:
	-$(RM) ./Src/SRC_APP/main.d ./Src/SRC_APP/main.o ./Src/SRC_APP/main.su

.PHONY: clean-Src-2f-SRC_APP

