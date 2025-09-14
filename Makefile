

# Compiler
CC = clang

# Directories
SRC_DIR = src
BUILD_DIR = build
LIB_DIR = libs/raylib

# Files
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
TARGET = mygame

# Compiler flags
CFLAGS = -I$(LIB_DIR)/src -I$(LIB_DIR)/src/external

# Linker flags
LDFLAGS = -L$(LIB_DIR)/src -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo

# Default target
all: $(TARGET)

# Build the target executable
$(TARGET): $(OBJ_FILES)
	$(CC) -o $@ $^ $(LDFLAGS)

# Compile .c files to .o files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(BUILD_DIR)/*.o $(TARGET)

.PHONY: all clean
