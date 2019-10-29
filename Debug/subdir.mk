################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Cilindro.cpp \
../Circulo.cpp \
../Cubo.cpp \
../Figura.cpp \
../Figura2D.cpp \
../Figura3D.cpp \
../Triangulo.cpp \
../principal.cpp 

OBJS += \
./Cilindro.o \
./Circulo.o \
./Cubo.o \
./Figura.o \
./Figura2D.o \
./Figura3D.o \
./Triangulo.o \
./principal.o 

CPP_DEPS += \
./Cilindro.d \
./Circulo.d \
./Cubo.d \
./Figura.d \
./Figura2D.d \
./Figura3D.d \
./Triangulo.d \
./principal.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


