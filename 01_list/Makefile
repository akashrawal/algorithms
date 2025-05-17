
objects := build/iteration_1 \
		   build/insert_beginning \
		   build/insert_end \
		   build/insert_middle \
		   build/delete \
		   build/delete_fast \
		   build/binary_search 

ALL: $(objects)

build:
	mkdir -p build

build/%: %.c build
	gcc -Wall -o $@ $<

run_%: build/%
	./$<

.PHONY: clean
clean:
	rm -rf build

