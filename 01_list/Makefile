
objects := build/iteration_1 \
		   build/insert_beginning \
		   build/insert_end \
		   build/insert_middle

ALL: $(objects)

build:
	mkdir -p build

build/%: %.c build
	gcc -Wall -o $@ $<

.PHONY: clean
clean:
	rm -rf build

