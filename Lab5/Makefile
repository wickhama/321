BIN 		= pipe 
COMPILER	= gcc
CPPFLAGS	= 
TARGETS		= pipe.o 
SOURCES		= pipe.c Makefile 

$(BIN) : 	$(TARGETS)
	$(COMPILER) $(CPPFLAGS) -o $(BIN) $(TARGETS)

%.o: %.c
	$(COMPILER) $(CPPFLAGS) -c $<

script:
	cat $(SOURCES)

clean :
	rm -f $(TARGETS) $(BIN) core *.bck
