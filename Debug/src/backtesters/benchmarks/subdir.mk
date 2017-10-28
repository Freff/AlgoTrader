################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/backtesters/benchmarks/BasicInvestor.cpp 

OBJS += \
./src/backtesters/benchmarks/BasicInvestor.o 

CPP_DEPS += \
./src/backtesters/benchmarks/BasicInvestor.d 


# Each subdirectory must supply rules for building sources it contributes
src/backtesters/benchmarks/%.o: ../src/backtesters/benchmarks/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -Wextra -Werror -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


