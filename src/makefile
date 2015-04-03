COMP=g++
CPPFLAGS=-std=c++11 -g # -DMAP
EXE=lut
CLEAN=clean
CLEANO=cleano

NOM=main FileReader Symbol State Val Program Instruction Declaration Operators Operator DecVariable DecConstant State1toN LexicalAnalyser Automat Identifier ExprBinaire Expression ExprAdd ExprMult ExprPar InstructionLecture InstructionEcriture InstructionAffectation Transformation
INT=$(addsuffix .h, $(NOM))
REAL=$(addsuffix .cpp, $(NOM))
OBJ=$(addsuffix .o, $(NOM))
#OBJ=$(addprefix obj/, $(preOBJ))
EDL=g++
RM=rm
ECHO=@echo
EDLFLAGS=
RMFLAGS=-f
LIBS=-lboost_regex #libs/libtp.a -lncurses -ltcl 
LIBPATH=#-L
INCPATH=#-I libs/
TEST = test
TESTPATH = ../test
TESTFILE = mktest.sh
SRCPATH = ../src

$(EXE):$(OBJ)
	$(ECHO) "Edition des liens"
	$(EDL) $(EDLFLAGS) $(LIBPATH) -o $(EXE) $(OBJ) $(LIBS)
	chmod 770 $(OBJ) $(INT) $(REAL)
	chmod 771 $(EXE) 

PHONY:$(CLEAN)

%.o:%.cpp
	$(ECHO) "Compilation de $<"
	$(COMP) $(CPPFLAGS) $(INCPATH) -c $<

$(CLEAN):
	$(ECHO) "Nettoyage"
	$(RM) $(RMFLAGS) $(OBJ) $(EXE) core $(EXE)*stackdump


$(CLEANO):
	$(ECHO) "Nettoyage"
	$(RM) $(RMFLAGS) $(OBJ) core $(EXE)*stackdump

$(TEST) :
	cd $(TESTPATH) ; ./$(TESTFILE) ; cd $(SRCPATH)
