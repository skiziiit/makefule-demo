CFLAGS = -Wall -Wextra -pedantic

main: main.c fns.c
	gcc $(CFLAGS) main.c fns.c -o main
clean:
	rm main
run: main
	./main