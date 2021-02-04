.POSIX:

include $(CONFIG_MK)

OBJECTS = main.o

all: a.out

.c.o:
	$(CC) $(MYCFLAGS) -Wno-pointer-arith -c $<

a.out: $(OBJECTS)
	$(CC) $(OBJECTS) -o a.out $(MYLDFLAGS)
	
clean:
	rm -f a.out $(OBJECTS)

.PHONY: all clean
