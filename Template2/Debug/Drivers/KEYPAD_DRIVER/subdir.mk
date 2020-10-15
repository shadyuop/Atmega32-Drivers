################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/KEYPAD_DRIVER/KEYPAD_prog.c 

OBJS += \
./Drivers/KEYPAD_DRIVER/KEYPAD_prog.o 

C_DEPS += \
./Drivers/KEYPAD_DRIVER/KEYPAD_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/KEYPAD_DRIVER/%.o: ../Drivers/KEYPAD_DRIVER/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


