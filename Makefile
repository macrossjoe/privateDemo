PROJECT=demo

all:
	@echo "building " $(PROJECT) "..."
	@gcc -o $(PROJECT) main.c
	@echo "Done."

clean:
	rm -rf $(PROJECT)

