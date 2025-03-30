##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Storage_class
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/trcagj/MyWorkspaces/AdvancedCourseC
ProjectPath            :=C:/Users/trcagj/MyWorkspaces/AdvancedCourseC/Storage_class
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/Storage_class
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=cagj
Date                   :=28/03/2025
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir -p
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/trcagj/MyWorkspaces/AdvancedCourseC/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := ar rcu
CXX      := g++
CC       := gcc
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -O0 -gdwarf-2 -std=c99 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Challenge3_solution_file1.c$(ObjectSuffix) $(IntermediateDirectory)/Challenge3_solution_file2.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Challenge3_solution_file1.c$(ObjectSuffix): Challenge3_solution_file1.c 
	$(CC) $(SourceSwitch) "C:/Users/trcagj/MyWorkspaces/AdvancedCourseC/Storage_class/Challenge3_solution_file1.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Challenge3_solution_file1.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Challenge3_solution_file1.c$(PreprocessSuffix): Challenge3_solution_file1.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Challenge3_solution_file1.c$(PreprocessSuffix) Challenge3_solution_file1.c

$(IntermediateDirectory)/Challenge3_solution_file2.c$(ObjectSuffix): Challenge3_solution_file2.c 
	$(CC) $(SourceSwitch) "C:/Users/trcagj/MyWorkspaces/AdvancedCourseC/Storage_class/Challenge3_solution_file2.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Challenge3_solution_file2.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Challenge3_solution_file2.c$(PreprocessSuffix): Challenge3_solution_file2.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Challenge3_solution_file2.c$(PreprocessSuffix) Challenge3_solution_file2.c

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


