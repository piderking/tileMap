clear


cd ~

cd tileMap

echo "deleting excess files"

rm main.o
rm sfml-app

g++ -c main.cpp 

echo "compiled"

echo "adding libary"



g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

echo "libary ran"

echo "executingo"

./sfml-app


cd run
