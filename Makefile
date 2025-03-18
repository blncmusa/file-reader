all:
	gcc main.c commands/view_file.c commands/delete_file.c commands/edit_file.c commands/add_file.c commands/list_files.c -o file-reader

# run:
# 	./file-manager