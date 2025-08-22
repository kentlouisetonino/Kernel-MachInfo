#include <linux/module.h>
#include <linux/kernel.h>

// * Module initialization function.
static int __init machinfo_init(void) {
  printk(KERN_INFO "Initialize machinfo module. \n");
  return 0;
}

// * Module exit function.
static void __exit machinfo_exit(void) {
  printk(KERN_INFO "Exit machinfo module. \n");
}

// * Register the module's init and exit function.
module_init(machinfo_init);
module_exit(machinfo_exit);

// * Module information.
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kent Tonino");
MODULE_DESCRIPTION("A simple Kernel Module project that display the machine information.");
