
objects := build/iteration_1

ALL: $(objects)

build:
	mkdir -p build

build/%: %.c build
	gcc -Wall -o $@ $<

.PHONY: clean
clean:
	rm -rf build

