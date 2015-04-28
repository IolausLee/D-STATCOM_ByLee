################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../asm/DSP281x_CodeStartBranch.asm \
../asm/DSP281x_usDelay.asm 

ASM_DEPS += \
./asm/DSP281x_CodeStartBranch.pp \
./asm/DSP281x_usDelay.pp 

OBJS += \
./asm/DSP281x_CodeStartBranch.obj \
./asm/DSP281x_usDelay.obj 

OBJS__QTD += \
".\asm\DSP281x_CodeStartBranch.obj" \
".\asm\DSP281x_usDelay.obj" 

ASM_DEPS__QTD += \
".\asm\DSP281x_CodeStartBranch.pp" \
".\asm\DSP281x_usDelay.pp" 

ASM_SRCS_QUOTED += \
"../asm/DSP281x_CodeStartBranch.asm" \
"../asm/DSP281x_usDelay.asm" 


# Each subdirectory must supply rules for building sources it contributes
asm/DSP281x_CodeStartBranch.obj: ../asm/DSP281x_CodeStartBranch.asm $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="asm/DSP281x_CodeStartBranch.pp" --obj_directory="asm" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '

asm/DSP281x_usDelay.obj: ../asm/DSP281x_usDelay.asm $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="asm/DSP281x_usDelay.pp" --obj_directory="asm" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '


