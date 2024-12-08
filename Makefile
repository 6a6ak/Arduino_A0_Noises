CC = gcc
CFLAGS = -Wall -Wextra -std=c11
OBJS = *.*
TARGET = *.*

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q $(OBJS) $(TARGET)
