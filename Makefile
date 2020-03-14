CXX := g++
CFLAGS := -g -Wall -std=c++11
SRCDIR := ./src
BUILDDIR := ./build
TARGET := ./bin/run

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

.PHONY: clean

$(TARGET): $(OBJECTS)
	@echo "Linking ... $(TARGET)";
	$(CXX) $^ -o $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	$(CXX) $(CFLAGS) -c $^ -o $@

clean:
	@echo "Cleaning...";
	$(RM) -r $(BUILDDIR) $(TARGET)



