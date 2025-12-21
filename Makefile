# The name of the executable
EXECUTABLE = a1

# The source file
SOURCE = a1.c

# The default target: builds the executable
all: $(EXECUTABLE)

# Rule to build the executable from the source file
$(EXECUTABLE): $(SOURCE)
	gcc $(SOURCE) -o $(EXECUTABLE)

# Phony target for cleanup
clean:
	rm -f $(EXECUTABLE)