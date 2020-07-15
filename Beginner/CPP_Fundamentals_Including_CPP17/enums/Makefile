DIR_PATH := Beginner/CPP_Fundamentals_Including_CPP17/enums
CC := g++
CCFLAGS := -std=c++11
target := run


all:	$(target)

$(target):    $(DIR_PATH)/enum.o
	$(CC) $(CCFLAGS) -o $(DIR_PATH)/$@ $^

%.o:	$(DIR_PATH)/%.cpp
	$(CC)  $(CCFLAGS) -c $<

clean:	  
	rm $(DIR_PATH)/*.o run 