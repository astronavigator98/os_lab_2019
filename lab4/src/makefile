CC=gcc
CFLAGS=-I.


parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) -o parallel_min_max utils.o find_min_max.o parallel_min_max.c $(CFLAGS)

utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)

find_min_max.o : utils.h find_min_max.h
	$(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)
    
process_memory :
	$(CC) -o process_memory process_memory.c $(CFLAGS)
	
parallel_sum : sum.h sum.c utils.o libSum.so
    $(CC) -o psum.o -c parallel_sum.c
    $(CC) -o parallel_sum -pthread psum.o utils.o libSum.so $(CFLAGS)
    
all : parallel_min_max process_memory parallel_sum

clean :
	rm find_min_max.o sequential_min_max parallel_min_max process_memory parallel_su,