################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/SWITCH_DRIVER/SWITCH_prog.c 

OBJS += \
./Drivers/SWITCH_DRIVER/SWITCH_prog.o 

C_DEPS += \
./Drivers/SWITCH_DRIVER/SWITCH_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/SWITCH_DRIVER/%.o: ../Drivers/SWITCH_DRIVER/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


