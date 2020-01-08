.SUFFIXES = .c .o

ifeq ($(OS), Windows_NT)
	CC = gcc
else
	CC = clang 
endif

INC =                       #<-- include 되는 헤더파일의 패스를 추가한다
LIBS =                     #<-- 링크 시에 필요한 라이브러리를 추가한다.
CFLAGS = -g #<-- 컴파일에 필요한 각종옵션을 추가한다.
SRCS =  $(wildcard *.c)    #<-- 소스파일의 이름을 적는다.
OBJS = $(SRCS: .c=.o)          #<-- 오브젝트 파일의 이름을 적는다.
TARGET = $(patsubst %.c, %.out, $(wildcard *.c))   #<-- 링크 후에 생성될 실행파일의 이름을 적는다.
FILENAME = $(notdir $(shell pwd))

all : $(TARGET) 

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(CFLAGS) $(OBJS) $(LIBS)

run :
	./ex1_$(FILENAME).out

dep :
	gccmakedep $(INC) $(SRCS)

clean :
	rm -rf $(TARGET) core
	rm -rf *.dSYM

file	:
	touch ex1_$(FILENAME).c

new :
	$(MAKE) clean
	$(MAKE)