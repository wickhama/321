BIN 		= Swap 
COMPILER	= gcc
CPPFLAGS	= 
TARGETS		= swap.o 
SOURCES		= swap.c Makefile 

$(BIN) : 	$(TARGETS)
	$(COMPILER) $(CPPFLAGS) -o $(BIN) $(TARGETS)

%.o: %.c
	$(COMPILER) $(CPPFLAGS) -c $<

script:
	cat $(SOURCES)

clean :
	rm -f $(TARGETS) $(BIN) core *.bck
