




#TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

#
# below one line project name need to be lowercaes
#### Module 1
PRJMODULE1  = EDCNavMeshToot
DEFINES += "EDCNAVMESHTOOT_API=__declspec(dllexport)"
#
INCLUDEPATH += ../Intermediate/Build/Win64/UnrealEditor/Inc/$$PRJMODULE1/UHT
INCLUDEPATH += $$PRJMODULE1 $$PRJMODULE1/Public $$PRJMODULE1/Private
#### Module 2
# PRJMODULE2  = StrategyGameLoadingScreen
# DEFINES += "STRATEGYGAMELOADINGSCREEN_API=__declspec(dllexport)"
# #
# INCLUDEPATH += ../Intermediate/Build/Win64/UnrealEditor/Inc/$$PRJMODULE2/UHT
# INCLUDEPATH += $$PRJMODULE2 $$PRJMODULE2/Public $$PRJMODULE2/Private
####


#
# this is true during development with unreal-editor...

DEFINES += "WITH_EDITORONLY_DATA=1"

## this project only
DEFINES += PLATFORM_ANDROID
##

#INCLUDEPATH += ../Plugins/NNEPostProcessing/Source/NNEPostProcessing/Public
# we should follow UE project struct to include files, start from prj.Build.cs folder
#
#  The Thirdparty libs
#
#
#
include(defs.pri)
include(inc.pri)
#
## this project only
## INCLUDEPATH += $$UESRCROOT/Runtime/Renderer/Private
PLUGINSROOT = ../Plugins
#INCLUDEPATH += $$PLUGINSROOT/UIExtension/Source/Public


##
#
#

HEADERS += \
    EDCNavMeshToot/EDCNavMeshToot.h \
    EDCNavMeshToot/Public/CustomAIController.h \
    EDCNavMeshToot/Public/CustomCharacterMovementComp.h

SOURCES += \
    EDCNavMeshToot/EDCNavMeshToot.cpp \
    EDCNavMeshToot/Private/CustomAIController.cpp \
    EDCNavMeshToot/Private/CustomCharacterMovementComp.cpp

DISTFILES += \
    EDCNavMeshToot.Target.cs \
    EDCNavMeshToot/EDCNavMeshToot.Build.cs \
    EDCNavMeshTootEditor.Target.cs
