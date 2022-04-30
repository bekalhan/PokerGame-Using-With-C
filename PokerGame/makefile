hepsi: derle calistir

derle:
	gcc -I ./include/ -o ./lib/Kisi.o -c ./src/Kisi.c
	gcc -I ./include/ -o ./lib/Oyun.o -c ./src/Oyun.c
	gcc -I ./include/ -o ./lib/node.o -c ./src/node.c
	gcc -I ./include/ -o ./lib/nodeoyun.o -c ./src/nodeoyun.c
	gcc -I ./include/ -o ./lib/nodezen.o -c ./src/nodezen.c
	gcc -I ./include/ -o ./lib/Dosya.o -c ./src/Dosya.c
	gcc -I ./include/ -o ./bin/Test ./lib/Kisi.o ./lib/Oyun.o ./lib/node.o ./lib/nodeoyun.o ./lib/nodezen.o ./lib/Dosya.o  ./src/Test.c
calistir:
	./bin/Test