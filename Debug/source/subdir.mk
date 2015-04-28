################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/DSP281x_Adc.c \
../source/DSP281x_DefaultIsr.c \
../source/DSP281x_GlobalVariableDefs.c \
../source/DSP281x_Gpio.c \
../source/DSP281x_MemCopy.c \
../source/DSP281x_PieCtrl.c \
../source/DSP281x_PieVect.c \
../source/DSP281x_Sci.c \
../source/DSP281x_SysCtrl.c 

OBJS += \
./source/DSP281x_Adc.obj \
./source/DSP281x_DefaultIsr.obj \
./source/DSP281x_GlobalVariableDefs.obj \
./source/DSP281x_Gpio.obj \
./source/DSP281x_MemCopy.obj \
./source/DSP281x_PieCtrl.obj \
./source/DSP281x_PieVect.obj \
./source/DSP281x_Sci.obj \
./source/DSP281x_SysCtrl.obj 

C_DEPS += \
./source/DSP281x_Adc.pp \
./source/DSP281x_DefaultIsr.pp \
./source/DSP281x_GlobalVariableDefs.pp \
./source/DSP281x_Gpio.pp \
./source/DSP281x_MemCopy.pp \
./source/DSP281x_PieCtrl.pp \
./source/DSP281x_PieVect.pp \
./source/DSP281x_Sci.pp \
./source/DSP281x_SysCtrl.pp 

OBJS__QTD += \
".\source\DSP281x_Adc.obj" \
".\source\DSP281x_DefaultIsr.obj" \
".\source\DSP281x_GlobalVariableDefs.obj" \
".\source\DSP281x_Gpio.obj" \
".\source\DSP281x_MemCopy.obj" \
".\source\DSP281x_PieCtrl.obj" \
".\source\DSP281x_PieVect.obj" \
".\source\DSP281x_Sci.obj" \
".\source\DSP281x_SysCtrl.obj" 

C_DEPS__QTD += \
".\source\DSP281x_Adc.pp" \
".\source\DSP281x_DefaultIsr.pp" \
".\source\DSP281x_GlobalVariableDefs.pp" \
".\source\DSP281x_Gpio.pp" \
".\source\DSP281x_MemCopy.pp" \
".\source\DSP281x_PieCtrl.pp" \
".\source\DSP281x_PieVect.pp" \
".\source\DSP281x_Sci.pp" \
".\source\DSP281x_SysCtrl.pp" 

C_SRCS_QUOTED += \
"../source/DSP281x_Adc.c" \
"../source/DSP281x_DefaultIsr.c" \
"../source/DSP281x_GlobalVariableDefs.c" \
"../source/DSP281x_Gpio.c" \
"../source/DSP281x_MemCopy.c" \
"../source/DSP281x_PieCtrl.c" \
"../source/DSP281x_PieVect.c" \
"../source/DSP281x_Sci.c" \
"../source/DSP281x_SysCtrl.c" 


# Each subdirectory must supply rules for building sources it contributes
source/DSP281x_Adc.obj: ../source/DSP281x_Adc.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="source/DSP281x_Adc.pp" --obj_directory="source" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '

source/DSP281x_DefaultIsr.obj: ../source/DSP281x_DefaultIsr.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="source/DSP281x_DefaultIsr.pp" --obj_directory="source" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '

source/DSP281x_GlobalVariableDefs.obj: ../source/DSP281x_GlobalVariableDefs.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="source/DSP281x_GlobalVariableDefs.pp" --obj_directory="source" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '

source/DSP281x_Gpio.obj: ../source/DSP281x_Gpio.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="source/DSP281x_Gpio.pp" --obj_directory="source" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '

source/DSP281x_MemCopy.obj: ../source/DSP281x_MemCopy.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="source/DSP281x_MemCopy.pp" --obj_directory="source" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '

source/DSP281x_PieCtrl.obj: ../source/DSP281x_PieCtrl.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="source/DSP281x_PieCtrl.pp" --obj_directory="source" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '

source/DSP281x_PieVect.obj: ../source/DSP281x_PieVect.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="source/DSP281x_PieVect.pp" --obj_directory="source" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '

source/DSP281x_Sci.obj: ../source/DSP281x_Sci.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="source/DSP281x_Sci.pp" --obj_directory="source" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '

source/DSP281x_SysCtrl.obj: ../source/DSP281x_SysCtrl.c $(GEN_OPTS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g --define="_DEBUG" --define="LARGE_MODEL" --include_path="D:/Program Files/Texas Instruments/ccsv4/tools/compiler/c2000/include" --include_path="C:/Users/ACIP-Lee/Documents/workspace/D-STATCOM_ByLee/include" --diag_warning=225 --large_memory_model --unified_memory --preproc_with_compile --preproc_dependency="source/DSP281x_SysCtrl.pp" --obj_directory="source" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '


