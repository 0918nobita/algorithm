BINS := $(patsubst %.cc, %.bin, $(wildcard ./*.cc))
CPPFLAGS ?= -Wall -O2

.PHONY: build
build: $(BINS)

%.bin: %.cc
	$(CXX) $(CPPFLAGS) -o $@ $?

.PHONY: lint
lint:
	cpplint --filter=-legal/copyright *.cc

.PHONY: format
format:
	clang-format -style=Google -i *.cc

.PHONY: clean
clean:
	rm -f *.bin
