BIN 		= Lab2
COMPILER	= gcc
CPPFLAGS	= 
TARGETS		= lab2.o square.o
SOURCES		= lab2.c square.c Makefile

$(BIN) : 	$(TARGETS)
	$(COMPILER) $(CPPFLAGS) -o $(BIN) $(TARGETS)

%.o: %.c
	$(COMPILER) $(CPPFLAGS) -c $<

script:
	cat $(SOURCES)

clean :
	rm -f $(TARGETS) $(BIN) core *.bck
