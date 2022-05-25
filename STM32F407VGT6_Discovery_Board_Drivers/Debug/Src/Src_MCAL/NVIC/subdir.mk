################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Src_MCAL/NVIC/MCAL_NVIC.c 

OBJS += \
./Src/Src_MCAL/NVIC/MCAL_NVIC.o 

C_DEPS += \
./Src/Src_MCAL/NVIC/MCAL_NVIC.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Src_MCAL/NVIC/%.o Src/Src_MCAL/NVIC/%.su: ../Src/Src_MCAL/NVIC/%.c Src/Src_MCAL/NVIC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-Src_MCAL-2f-NVIC

clean-Src-2f-Src_MCAL-2f-NVIC:
	-$(RM) ./Src/Src_MCAL/NVIC/MCAL_NVIC.d ./Src/Src_MCAL/NVIC/MCAL_NVIC.o ./Src/Src_MCAL/NVIC/MCAL_NVIC.su

.PHONY: clean-Src-2f-Src_MCAL-2f-NVIC

