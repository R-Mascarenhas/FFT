SRC 	= src
INC 	= -I includes
CC = gcc
LIB = fourier

SOURCES = $(SRC)/fourier.c \
		  $(SRC)/main.c

CFLAGS 	= -Wall -Wextra -std=c11

LFLAGS = -L.

FLAGS = -lm

OBJS:=$(SOURCES:.c=.o)

TARGET = fourier

all: build

%.o: %.c
	@echo "\nMAKING OBJECT FILES"
	$(CC) $(CFLAGS) $(INC)/ -c $< -o $@

%.a: $(OBJS)
	@echo "\nCREATING STATIC LIBRARY"
	ar rcs lib$(LIB).a $^

.PHONY: build clean run

build: lib$(LIB).a
	@echo "\nBUILDING FILES"
	$(CC) $(CFLAGS) $(LFLAGS) -l$(LIB) -o ./$(TARGET).out $(FLAGS)

debug: lib$(LIB).a
	@echo "\nBUILDING Debug FILE"
	$(CC) $(LFLAGS) -l$(LIB) -g -O0 $(FLAGS)

run: build
	@echo "\nRUNNING..."
	./$(TARGET).out

clean:
	rm -f *.out *.a
	cd src && rm -f *.o
