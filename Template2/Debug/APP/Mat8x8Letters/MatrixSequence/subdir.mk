################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/Mat8x8Letters/MatrixSequence/MatrixSequence.c 

OBJS += \
./APP/Mat8x8Letters/MatrixSequence/MatrixSequence.o 

C_DEPS += \
./APP/Mat8x8Letters/MatrixSequence/MatrixSequence.d 


# Each subdirectory must supply rules for building sources it contributes
APP/Mat8x8Letters/MatrixSequence/%.o: ../APP/Mat8x8Letters/MatrixSequence/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


