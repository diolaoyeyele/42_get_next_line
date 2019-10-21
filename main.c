#include "get_next_line.h"

int main(int argc, char **argv)
{
    int fd;
    char *line;
    if (argc == 1)
        fd = 0;
    else if (argc > 1)
    {
        fd = open(argv[argc - 1], O_RDONLY);
    }
    
    else
    {
        return (2);
    }
    while(get_next_line(fd, &line) == 1)
    {
        ft_putendl(line);
    }
    if (argc > 2)
        close(fd);
    return (0);
}
