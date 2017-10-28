################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/finance/Portfolio.cpp \
../src/finance/Position.cpp \
../src/finance/Stock.cpp \
../src/finance/Wallet.cpp 

OBJS += \
./src/finance/Portfolio.o \
./src/finance/Position.o \
./src/finance/Stock.o \
./src/finance/Wallet.o 

CPP_DEPS += \
./src/finance/Portfolio.d \
./src/finance/Position.d \
./src/finance/Stock.d \
./src/finance/Wallet.d 


# Each subdirectory must supply rules for building sources it contributes
src/finance/%.o: ../src/finance/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -Wextra -Werror -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


