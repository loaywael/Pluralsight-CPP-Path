CC := g++
CCFLAGS := -std=c++17 -Wall -Wextra -MD
# ---------------------------------------------
ROOT_DIR := Beginner/CPP_Fundamentals_Including_CPP17/operator_overload
SRC_DIR := $(ROOT_DIR)/src
INC_DIR := $(ROOT_DIR)/include
BUILD_DIR := $(ROOT_DIR)/build
# ---------------------------------------------
CPPs := $(shell find $(SRC_DIR) -type f -name *.cpp)
OBJs := $(patsubst $(SRC_DIR)/%,$(BUILD_DIR)/%,$(CPPs:.cpp=.o))
TARGET := $(ROOT_DIR)/bin/run
# LIB := 


all : $(TARGET)
	@$(TARGET)

$(TARGET) :	$(OBJs) 
	@echo ">>> Linking ..."
	$(CC) $(CCFLAGS) $^ -o $@
	@echo ">>> Done!"
	@echo "------------------------"

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.cpp
	@echo ">>> Building... <$@>"
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CCFLAGS) -I $(INC_DIR)/ -c $< -o $@ 
	@echo ">>> Done!"
	@echo "------------------------"


clean :
	@echo ">>> Cleaning ..."
	rm -r $(BUILD_DIR) $(TARGET)
	@echo ">>> Done!"
	@echo "------------------------"

.PHONY : clean
-include $(OBJs:.o=.d)