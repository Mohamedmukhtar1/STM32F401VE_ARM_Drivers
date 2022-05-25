################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/Src_MCAL/RCC/subdir.mk
-include Src/Src_MCAL/NVIC/subdir.mk
-include Src/Src_MCAL/GPIO/subdir.mk
-include Src/Src_MCAL/EXTIx/subdir.mk
-include Src/Src_HAL/LED/subdir.mk
-include Src/Src_APP/Utility/Utility_Delay/subdir.mk
-include Src/Src_APP/Debug/subdir.mk
-include Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := STM32F407VGT6_Discovery
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
STM32F407VGT6_Discovery.elf \

MAP_FILES += \
STM32F407VGT6_Discovery.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
STM32F407VGT6_Discovery.list \


# All Target
all: main-build

# Main-build Target
main-build: STM32F407VGT6_Discovery.elf secondary-outputs

# Tool invocations
STM32F407VGT6_Discovery.elf STM32F407VGT6_Discovery.map: $(OBJS) $(USER_OBJS) E:\WorkShops\ ECE\ Knowledge\GitHup\ WorkShop\STM32_ARM_Drivers\STM32F407VGT6_Discovery_Board_Drivers\STM32F407VGTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "STM32F407VGT6_Discovery.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"E:\WorkShops ECE Knowledge\GitHup WorkShop\STM32_ARM_Drivers\STM32F407VGT6_Discovery_Board_Drivers\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="STM32F407VGT6_Discovery.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

STM32F407VGT6_Discovery.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "STM32F407VGT6_Discovery.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) STM32F407VGT6_Discovery.elf STM32F407VGT6_Discovery.list STM32F407VGT6_Discovery.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
