BIN 		= Test 
COMPILER	= gcc
CPPFLAGS	= 
TARGETS		= gets.o
SOURCES		= gets.c Makefile

$(BIN) : 	$(TARGETS)
	$(COMPILER) $(CPPFLAGS) -o $(BIN) $(TARGETS)

%.o: %.c
	$(COMPILER) $(CPPFLAGS) -c $<

script:
	cat $(SOURCES)

clean :
	rm -f $(TARGETS) $(BIN) core *.bck
