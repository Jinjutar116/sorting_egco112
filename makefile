DEPS= test
compile: main.c 
	 gcc main.c -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS)  $(var)

clean: $(DEPS)
	 rm $(DEPS)
