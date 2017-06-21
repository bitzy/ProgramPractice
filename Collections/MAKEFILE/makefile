.PHONY: all clean
# compilers
CXX			= g++
CXXFLAGS	:= -Wall -O3 -std=c++11

#dependence
CXXFLAGS	+=`pkg-config --cflags opencv`
OPENCVDL	=`pkg-config --libs opencv`

SOURCES		+= start.cpp BlurDetector.cpp
OBJECTS		+= start.o ThreadCell.o BlurDetector.o
TARGET		= vBlurDetector

all: $(TARGET)
$(TARGET): $(SOURCES)
	$(CXX) $(SOURCES) $(CXXFLAGS) -o $@ $(OPENCVDL)

clean:
	rm -f *.o
	rm -f $(TARGET)
