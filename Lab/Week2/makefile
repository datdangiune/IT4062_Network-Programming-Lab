
CXX = g++

CXXFLAGS = -std=c++11 -Wall

LDFLAGS = -lws2_32

SRC = week2.cpp

OUT = lookup.exe

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC) $(LDFLAGS)

clean:
	del $(OUT)
