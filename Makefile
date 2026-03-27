CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I.

BUILD_DIR = build
TARGET = $(BUILD_DIR)/main
SRCS = bits.c example/main.c

$(TARGET): $(SRCS)
		mkdir -p $(BUILD_DIR)
		$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
		rm -rf $(BUILD_DIR)

run: $(TARGET)
		./$(TARGET)