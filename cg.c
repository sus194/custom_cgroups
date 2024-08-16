#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/string.h>
#include <linux/uaccess.h>
#include "cg.h"


SYSCALL_DEFINE3(cg, char*, command, char**, args, int,size)
{
    char* command = NULL;
    if(strcmp(command, "create") == 0)
    {
        
        printk("creating\n");
        return 0;
    }
    else
    {
        printk("Command not recognized\n");
        return -1;
    }
long result = 0;
printk("Hello World!\n");
printk("--syscall argument %d\n", argument);
result = argument + 1;
printk("--returning %d + 1 = %ld\n", argument, result);
return result;
}
