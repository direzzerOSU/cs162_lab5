
CXX = g++
CXXFLAGS = -std=c++0x
#CXXFLAGS += -Wall
#CXXFLAGS += -pedantic-errors
#CXXFLAGS += -g
#CXXFLAGS += -O3
#LDFLAGS = -lboost_date_time

OBJS = main.o menu.o inputValidation.o recursion.o

SRCS = main.cpp menu.cpp inputValidation.cpp recursion.cpp

HEADERS = menu.hpp inputValidation.hpp recursion.hpp 

#target: dependencies
#	rule to build
#

recursion: ${SRCS} ${HEADERS}	
	${CXX} ${CXXFLAGS} ${SRCS} -o recursion

#${OBJS}: ${SRCS}
#	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
