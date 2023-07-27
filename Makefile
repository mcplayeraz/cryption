SOURCE = ./main.cpp
OUTPATH = ./out/
EXE = $(OUTPATH)cryption.exe
VAR = 

$(EXE): $(SOURCE)
	g++ $(SOURCE) -o $(EXE)

run: $(EXE)
	$(EXE) $(VAR)
