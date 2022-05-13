################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/SRC_MCAL/RCC/MCAL_RCC.c 

OBJS += \
./Src/SRC_MCAL/RCC/MCAL_RCC.o 

C_DEPS += \
./Src/SRC_MCAL/RCC/MCAL_RCC.d 


# Each subdirectory must supply rules for building sources it contributes
Src/SRC_MCAL/RCC/%.o Src/SRC_MCAL/RCC/%.su: ../Src/SRC_MCAL/RCC/%.c Src/SRC_MCAL/RCC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F401VETx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-SRC_MCAL-2f-RCC

clean-Src-2f-SRC_MCAL-2f-RCC:
	-$(RM) ./Src/SRC_MCAL/RCC/MCAL_RCC.d ./Src/SRC_MCAL/RCC/MCAL_RCC.o ./Src/SRC_MCAL/RCC/MCAL_RCC.su

.PHONY: clean-Src-2f-SRC_MCAL-2f-RCC

