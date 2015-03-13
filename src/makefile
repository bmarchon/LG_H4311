COMP=g++
CPPFLAGS=# -DMAP
EXE=lut
CLEAN=clean
CLEANO=cleano
NOM=main Reader Symbole Etat Simple Variable Constante Programme ListeDeclaration ListeInstruction Instruction Declaration Affect Lire Ecrire DecVariable DecConstante Etat1aN
INT=$(addsuffix .h, $(NOM))
REAL=$(addsuffix .cpp, $(NOM))
OBJ=$(addsuffix .o, $(NOM))
#OBJ=$(addprefix obj/, $(preOBJ))
EDL=g++
RM=rm
ECHO=@echo
EDLFLAGS=
RMFLAGS=-f
LIBS=#libs/libtp.a -lncurses -ltcl
LIBPATH=#-L
INCPATH=#-I libs/
 
PHONY:$(CLEAN)

%.o:%.cpp
	$(ECHO) "Compilation de $<"
	$(COMP) $(CPPFLAGS) $(INCPATH) -c $<

$(EXE):$(OBJ)
	$(ECHO) "Edition des liens"
	$(EDL) $(EDLFLAGS) $(LIBPATH) -o $(EXE) $(OBJ) $(LIBS)
	$(ECHO) "coucou"
	chmod 770 $(OBJ) $(INT) $(REAL)
	chmod 771 $(EXE)

$(CLEAN):
	$(ECHO) "Nettoyage"
	$(RM) $(RMFLAGS) $(OBJ) $(EXE) core


$(CLEANO):
	$(ECHO) "Nettoyage"
	$(RM) $(RMFLAGS) $(OBJ) core
