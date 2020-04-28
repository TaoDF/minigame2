TARGET = laoba

CPP_FILES = menu.cpp game.cpp
BASE = $(basename $(CPP_FILES))
OBJS = $(addsuffix .o, $(BASE))
LIBS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

$(TARGET):$(OBJS)

	-rm -f $@

	g++ -o $(TARGET) $(LIBS) main.cpp $(OBJS) 



%.o:%.cpp


	g++ -c -o $@ $<


clean:

	-rm -f lao8

	-rm -f *.o
