br : clean compilar ejecutar

compilar: src./Main.cpp
g++ src/Main.cpp -o bin/mascotas - I include

ejecutar: bin/mascotas
./bin/mascotas

clean: bin/mascotas
rm bin/mascotas