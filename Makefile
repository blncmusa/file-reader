all:
	gcc main.c commands/view_file.c commands/delete_file.c commands/edit_file.c -o file-reader

# run:
# 	./file-manager