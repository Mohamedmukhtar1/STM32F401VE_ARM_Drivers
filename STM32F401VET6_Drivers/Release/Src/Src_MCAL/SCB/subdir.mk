################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Src_MCAL/SCB/MCAL_SCB.c 

OBJS += \
./Src/Src_MCAL/SCB/MCAL_SCB.o 

C_DEPS += \
./Src/Src_MCAL/SCB/MCAL_SCB.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Src_MCAL/SCB/%.o Src/Src_MCAL/SCB/%.su: ../Src/Src_MCAL/SCB/%.c Src/Src_MCAL/SCB/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DSTM32 -DSTM32F4 -DSTM32F401VETx -c -I../Inc -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-Src_MCAL-2f-SCB

clean-Src-2f-Src_MCAL-2f-SCB:
	-$(RM) ./Src/Src_MCAL/SCB/MCAL_SCB.d ./Src/Src_MCAL/SCB/MCAL_SCB.o ./Src/Src_MCAL/SCB/MCAL_SCB.su

.PHONY: clean-Src-2f-Src_MCAL-2f-SCB

