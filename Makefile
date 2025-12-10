all:
	@echo "Compilando o programa..."
	@gcc -c ./src/transacao.c -I ./header -o ./obj/transacao.o
	@gcc -c ./src/lista.c -I ./header -o ./obj/lista.o
	@gcc ./src/main.c ./obj/*.o -I ./header -o ./bin/main


run:
	@echo "Rodando o programa..."
	@./bin/main

clean:
	@echo "Limpando pastas bin e obj"
	@rm -f ./bin/*  ./obj/*

.PHONY: all run clean