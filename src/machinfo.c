#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/utsname.h>

// * Module initialization function.
static int __init machinfo_init(void) {
  struct new_utsname *uts = init_utsname();

  printk(KERN_INFO "Initialize machinfo module. \n");
  printk(KERN_INFO "Kernel Name: %s\n", uts->sysname);
  printk(KERN_INFO "Kernel Release: %s\n", uts->release);
  printk(KERN_INFO "Kernel Version: %s\n", uts->version);
  printk(KERN_INFO "Machine Architecture: %s\n", uts->machine);

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
