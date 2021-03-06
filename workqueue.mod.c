#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xae4b0ceb, "module_layout" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x37a0cba, "kfree" },
	{ 0x12c554f0, "cdev_del" },
	{ 0x92c90e22, "queue_work" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xea01506a, "cdev_add" },
	{ 0x1023a56c, "cdev_init" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x73ec879a, "finish_wait" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7510F54901F64DF07370E0B");
