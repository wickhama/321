BIN 		= Challenge 
COMPILER	= gcc
CPPFLAGS	= 
TARGETS		= challenge.o 
SOURCES		= challenge.c Makefile 

$(BIN) : 	$(TARGETS)
	$(COMPILER) $(CPPFLAGS) -o $(BIN) $(TARGETS)

%.o: %.c
	$(COMPILER) $(CPPFLAGS) -c $<

script:
	cat $(SOURCES)

clean :
	rm -f $(TARGETS) $(BIN) core *.bck
