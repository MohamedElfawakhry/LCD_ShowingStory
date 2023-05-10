################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/DIO/subdir.mk
-include HAL/SSD/subdir.mk
-include HAL/LED/subdir.mk
-include HAL/CLCD/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
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

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
LCD_A4_Hamokhsa.lss \

FLASH_IMAGE += \
LCD_A4_Hamokhsa.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: LCD_A4_Hamokhsa.elf secondary-outputs

# Tool invocations
LCD_A4_Hamokhsa.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,LCD_A4_Hamokhsa.map -mmcu=atmega32 -o "LCD_A4_Hamokhsa.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

LCD_A4_Hamokhsa.lss: LCD_A4_Hamokhsa.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S LCD_A4_Hamokhsa.elf  >"LCD_A4_Hamokhsa.lss"
	@echo 'Finished building: $@'
	@echo ' '

LCD_A4_Hamokhsa.hex: LCD_A4_Hamokhsa.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex LCD_A4_Hamokhsa.elf  "LCD_A4_Hamokhsa.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: LCD_A4_Hamokhsa.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 LCD_A4_Hamokhsa.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) LCD_A4_Hamokhsa.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
