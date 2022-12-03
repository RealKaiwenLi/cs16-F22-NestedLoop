CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized -std=c++11

BINARIES= treeTests

COMMON_OBJECT_FILES = tree.o tddFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./treeTests 1
	./treeTests 2
	./treeTests 3
	./treeTests 4
	./treeTests 5
	./treeTests 6
	./treeTests 7
	./treeTests 8
	./treeTests 9

treeTests: treeTests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o