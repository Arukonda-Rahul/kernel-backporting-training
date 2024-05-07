#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static void test_exit(void)
{
	printk(KERN_INFO"Bye\n");
}

module_exit(test_exit);
