OBJECTS="queue.o main.o"
redo-ifchange $OBJECTS
g++ -o $3 $OBJECTS
