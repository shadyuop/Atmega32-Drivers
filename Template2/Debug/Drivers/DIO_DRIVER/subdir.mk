################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/DIO_DRIVER/DIO_prog.c 

OBJS += \
./Drivers/DIO_DRIVER/DIO_prog.o 

C_DEPS += \
./Drivers/DIO_DRIVER/DIO_prog.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/DIO_DRIVER/%.o: ../Drivers/DIO_DRIVER/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


