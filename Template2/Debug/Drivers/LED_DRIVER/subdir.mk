################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/LED_DRIVER/LED_prog.c 

OBJS += \
./Drivers/LED_DRIVER/LED_prog.o 

C_DEPS += \
./Drivers/LED_DRIVER/LED_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/LED_DRIVER/%.o: ../Drivers/LED_DRIVER/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


