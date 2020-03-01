# get_next_line

* This is a 42 project to write a function that returns a line from a file descriptor
* The fuction is prototyped ---- (int) getnexline(const int fd, char **line);
* First parameter is the file descriptor that will be used to read.
* second parameter is the address of a pointer to a character that will be used to save the line from the file descriptor 
* The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed or if an error has happened respectively.
* This function returns it's result without the '\n'.

