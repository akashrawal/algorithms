
objects := build/iteration_1 \
		   build/insert_beginning \
		   build/insert_end \
		   build/insert_middle \
		   build/delete \
		   build/delete_fast \
		   build/dynamic_array \
		   build/binary_search \
		   build/selection_sort \
		   build/insertion_sort \
		   build/bubble_sort \
		   build/merging

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

