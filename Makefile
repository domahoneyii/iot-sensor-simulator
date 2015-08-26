CC := g++ # This is the main compiler

# Directories
SRCDIR := src
BUILDDIR := build
LIBDIR := lib

# Targets
TARGET := lib/simulator.so # libary for inclusion in other programs

# compile and link info
SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

# Flags and includes
LFLAGS := -shared -fpPIC
CFLAGS := -g -fPIC
CLIB := -pthread
INC := -I include

# Link executable target
$(TARGET): $(OBJECTS)
	@echo " Building library"
	@echo " $(CC) $(LFLAGS) $^ -o $(TARGET) "; $(CC) $(LFLAGS) $^ -o $(TARGET)

# Compile target
$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@echo "Compiling"
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CFLAGS) $(INC) -c -o $@ $<"; $(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " Cleaning...";
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR) $(TARGET)

# Tests
tester:
	$(CC) $(CFLAGS) test/tester.cpp $(INC) $(LIB) -o bin/tester

.PHONY: clean