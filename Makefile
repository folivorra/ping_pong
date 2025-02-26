CC=gcc
FLAGS=-Wall -Werror -Wextra
EXENAME_SIMPLE=build/pong.out
EXENAME_INTER=build/pong_interactive.out

all: $(EXENAME_SIMPLE) $(EXENAME_INTER)

clean:

	rm -rf build

rebuild: clean $(EXENAME_SIMPLE) $(EXENAME_INTER)

$(EXENAME_SIMPLE): src/pong.c

	mkdir -p build
	$(CC) $^ $(FLAGS) -o $(EXENAME_SIMPLE)

$(EXENAME_INTER): src/pong_interactive.c

	mkdir -p build
	$(CC) $^ $(FLAGS) -lncurses -o $(EXENAME_INTER)