1、驱动hello.c如下：
 
#include <linux/init.h>
#include <linux/module.h>
 
static int hello_init(void)
{
       printk(KERN_INFO "Hello World enter\n"); //内核打印，KERN_INFO其中一个打印级别
       return 0;
}
 
static void hello_exit(void)
{
       printk(KERN_INFO "hello World exit\n");
}
 
module_init(hello_init); //宏，模块装载时，会被调用的函数
module_exit(hello_exit); //宏，模块卸载时，被调用的函数
 
MODULE_AUTHOR("cindy");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("A simple hello world module");
MODULE_ALIAS("a simplest module");
 
2.Makefile
 
  编写Makefile中遇见多种报错，Makefile:10 ××× missing separator. stop.
  
     Makefile中，命令行，要用tab键，而不是空格
     clean：
           rm -rf ×.O *.cmd
           
           其中rm前是tab
           
           
  .PHONY：clean         
           
  .PHONY 表示clean是个伪目标文件
