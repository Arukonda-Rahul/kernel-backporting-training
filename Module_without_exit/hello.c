#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static int test_init(void)
{
	printk(KERN_INFO"hi\n");
	return 0;
}


module_init(test_init);
