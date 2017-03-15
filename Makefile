PROJECT=demo

all:
	gcc -o $(PROJECT) main.c

clean:
	rm -rf $(PROJECT)

