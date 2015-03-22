######################################################################
# Automatically generated by qmake (3.0) sam. mars 21 06:54:59 2015
######################################################################
TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += C:\boost\boost_1_57_0
LIBS += C:\boost\boost_1_57_0\stage\lib\libboost_regex-mgw49-mt-1_57.a
CONFIG += c++11
# Input
HEADERS += Affect.h \
           AnalyseurLexical.h \
           Automate.h \
           Constante.h \
           DecConstante.h \
           Declaration.h \
           DecVariable.h \
           Ecrire.h \
           Etat.h \
           Etat1aN.h \
           ExprAdd.h \
           ExprBinaire.h \
           Expression.h \
           ExprMult.h \
           ExprPar.h \
           Identifiant.h \
           Instruction.h \
           InstructionAffectation.h \
           InstructionEcriture.h \
           InstructionLecture.h \
           Lire.h \
           ListeDeclaration.h \
           ListeInstruction.h \
           ListeVariables.h \
           main.h \
           main.hpp \
           OperateurMultiplicatif.h \
           Programme.h \
           Reader.h \
           Simple.h \
           Symbole.h \
           SymboleSimple.h \
           Utils.h \
           Val.h \
           Variable.h \
    ListeConstantes.h \
    OperateurAdditif.h

include(deployment.pri)
qtcAddDeployment()

SOURCES += Affect.cpp \
           AnalyseurLexical.cpp \
           Automate.cpp \
           Constante.cpp \
           DecConstante.cpp \
           Declaration.cpp \
           DecVariable.cpp \
           Ecrire.cpp \
           Etat.cpp \
           Etat1aN.cpp \
           ExprAdd.cpp \
           ExprBinaire.cpp \
           Expression.cpp \
           ExprMult.cpp \
           ExprPar.cpp \
           Identifiant.cpp \
           Instruction.cpp \
           InstructionAffectation.cpp \
           InstructionEcriture.cpp \
           InstructionLecture.cpp \
           Lire.cpp \
           ListeDeclaration.cpp \
           ListeInstruction.cpp \
           ListeVariables.cpp \
           main.cpp \
           OperateurMultiplicatif.cpp \
           Programme.cpp \
           Reader.cpp \
           Simple.cpp \
           Symbole.cpp \
           SymboleSimple.cpp \
           Val.cpp \
           Variable.cpp \
    ListeConstantes.cpp \
    OperateurAdditif.cpp
