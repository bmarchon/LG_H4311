COMP=g++
CPPFLAGS=-std=c++11 # -DMAP
EXE=lut
CLEAN=clean
CLEANO=cleano
NOM=main Reader Symbole Etat Variable Constante Programme ListeDeclaration ListeInstruction Instruction Declaration SymboleSimple Lire Ecrire DecVariable DecConstante Etat1aN AnalyseurLexical Automate Identifiant Val
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
	$(RM) $(RMFLAGS) $(OBJ) $(EXE) core *exe.stackdump


$(CLEANO):
	$(ECHO) "Nettoyage"
	$(RM) $(RMFLAGS) $(OBJ) core *exe.stackdump
