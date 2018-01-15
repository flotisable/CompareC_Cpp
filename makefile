CXX            := g++
LD             := g++
CXXFLAGS       := -std=c++11
CPROG          := testC
CXXPROG        := testCpp
CXXPROG_UNSYNC := testCppUnsync

all: $(CPROG) $(CXXPROG) $(CXXPROG_UNSYNC)

$(CPROG): testC.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

$(CXXPROG): testCpp.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

$(CXXPROG_UNSYNC): CXXFLAGS += -DIOS_UNSYNC
$(CXXPROG_UNSYNC): testCpp.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm $(CPROG) $(CXXPROG) $(CXXPROG_UNSYNC)
