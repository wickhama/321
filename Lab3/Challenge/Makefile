BIN 		= Lab3 
COMPILER	= gcc
CPPFLAGS	= 
TARGETS		= lab3.o lower_stream.o 
SOURCES		= lab3.c lower_stream.c Makefile 

$(BIN) : 	$(TARGETS)
	$(COMPILER) $(CPPFLAGS) -o $(BIN) $(TARGETS)

%.o: %.c
	$(COMPILER) $(CPPFLAGS) -c $<

script:
	cat $(SOURCES)

clean :
	rm -f $(TARGETS) $(BIN) core *.bck

run: 
	./$(BIN)


