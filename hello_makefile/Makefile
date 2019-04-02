# Makefile simple
# Compiladores
CC = gcc
CXX = g++
RM = rm -f

# paths
SRC_PATH = src
BUILD_PATH = build
BIN_PATH = $(BUILD_PATH)/bin

# ejecutable
BIN_NAME = vector

# extensiones
SRC_EXT = cpp

# obtiene todos los archivos de codigo fuente ordenados por modificacion
SOURCES = $(shell find $(SRC_PATH) -name '*.$(SRC_EXT)' | sort -k 1nr | cut -f2-)

# archivos objeto
OBJECTS = $(SOURCES:$(SRC_PATH)/%.$(SRC_EXT)=$(BUILD_PATH)/%.o)

# configuracion de dependencias
DEPS = $(OBJECTS:.o=.d)

# flags
COMPILE_FLAGS = -std=c++11 -Wall -Wextra -g
INCLUDES = -I include/ -I /usr/local/include

# librerias
LIBS = 

.PHONY: default_target
default_target: release

.PHONY: release
release: export CXXFLAGS := $(CXXFLAGS) $(COMPILE_FLAGS)
release: dirs
		@$(MAKE) all

.PHONY: dirs
dirs:
	@echo "Creando directorios"
	@mkdir -p $(dir $(OBJECTS))
	@mkdir -p $(BIN_PATH)

.PHONY: clean
clean:
	@echo "Borrando symlink $(BIN_NAME)"
	@$(RM) $(BIN_NAME)
	@echo "Borrando directorios"
	@$(RM) -r $(BUILD_PATH)
	@$(RM) -r $(BIN_PATH)

# checks the executable and symlinks to the output
.PHONY: all
all: $(BIN_PATH)/$(BIN_NAME)
	@echo "Making symlink: $(BIN_NAME) -> $<"
	@$(RM) $(BIN_NAME)
	@ln -s $(BIN_PATH)/$(BIN_NAME) $(BIN_NAME)

# Creation of the executable
$(BIN_PATH)/$(BIN_NAME): $(OBJECTS)
	@echo "Enlazando: $@"
	$(CXX) $(OBJECTS) -o $@

# Add dependency files, if they exist
-include $(DEPS)

# Source file rules
# After the first compilation they will be joined with the rules from the
# dependency files to provide header dependencies
$(BUILD_PATH)/%.o: $(SRC_PATH)/%.$(SRC_EXT)
	@echo "Compilando: $< -> $@"
	$(CXX) $(CXXFLAGS) $(INCLUDES) -MP -MMD -c $< -o $@