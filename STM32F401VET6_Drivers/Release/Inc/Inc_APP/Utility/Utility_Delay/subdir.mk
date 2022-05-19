################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/Inc_APP/Utility/Utility_Delay/DELAY_UNIT.c 

OBJS += \
./Inc/Inc_APP/Utility/Utility_Delay/DELAY_UNIT.o 

C_DEPS += \
./Inc/Inc_APP/Utility/Utility_Delay/DELAY_UNIT.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/Inc_APP/Utility/Utility_Delay/%.o Inc/Inc_APP/Utility/Utility_Delay/%.su: ../Inc/Inc_APP/Utility/Utility_Delay/%.c Inc/Inc_APP/Utility/Utility_Delay/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32 -DSTM32F4 -DSTM32F401VETx -c -I../Inc -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Inc-2f-Inc_APP-2f-Utility-2f-Utility_Delay

clean-Inc-2f-Inc_APP-2f-Utility-2f-Utility_Delay:
	-$(RM) ./Inc/Inc_APP/Utility/Utility_Delay/DELAY_UNIT.d ./Inc/Inc_APP/Utility/Utility_Delay/DELAY_UNIT.o ./Inc/Inc_APP/Utility/Utility_Delay/DELAY_UNIT.su

.PHONY: clean-Inc-2f-Inc_APP-2f-Utility-2f-Utility_Delay

