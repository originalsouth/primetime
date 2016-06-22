CC=g++
primetime: primetime.cc
	$(CC) -Wall -Wextra -Werror -O3 -flto -mtune=native -o primetime primetime.cc

clean:
	rm -f primetime
