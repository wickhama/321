BIN 		= assignment 
COMPILER	= gcc
CPPFLAGS	= 
TARGETS		= assignment.o 
SOURCES		= assignment.c Makefile 

$(BIN) : 	$(TARGETS)
	$(COMPILER) $(CPPFLAGS) -o $(BIN) $(TARGETS)

%.o: %.c
	$(COMPILER) $(CPPFLAGS) -c $<

script:
	cat $(SOURCES)

clean :
	rm -f $(TARGETS) $(BIN) core *.bck
