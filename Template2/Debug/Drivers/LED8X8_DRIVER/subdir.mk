################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/LED8X8_DRIVER/LED8X8_prog.c 

OBJS += \
./Drivers/LED8X8_DRIVER/LED8X8_prog.o 

C_DEPS += \
./Drivers/LED8X8_DRIVER/LED8X8_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/LED8X8_DRIVER/%.o: ../Drivers/LED8X8_DRIVER/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


