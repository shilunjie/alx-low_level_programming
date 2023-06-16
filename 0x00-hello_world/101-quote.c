#include <unlistd.h>

/**
 * main - Point of entry
 *
 * Description: print code using write function
        write(int fd,const void *buf ,size_t count
 *
 * Rerurn: 1 (not success)
 */

int main(void)
{       
        char quo[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";
        write(1,quo,59);
        return (1);
}
