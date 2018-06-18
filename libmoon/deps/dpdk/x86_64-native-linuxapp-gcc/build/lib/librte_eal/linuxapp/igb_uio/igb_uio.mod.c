#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
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
	{ 0xe723e716, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb925cad6, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x1c436690, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x500c1141, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x29fc3c6c, __VMLINUX_SYMBOL_STR(pci_irq_vector) },
	{ 0xbf36c347, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xcb29f521, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x5b1aa91d, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xc74f2123, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8ff4079b, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xefa193e3, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x13fd9802, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9059781, __VMLINUX_SYMBOL_STR(__uio_register_device) },
	{ 0x46b7055b, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xb6dbe357, __VMLINUX_SYMBOL_STR(pci_alloc_irq_vectors_affinity) },
	{ 0xa11b55b2, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xb689b3fd, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x1c3f2f20, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa8036e9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6ba84515, __VMLINUX_SYMBOL_STR(pci_check_and_mask_intx) },
	{ 0x7b275e84, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x18e9a320, __VMLINUX_SYMBOL_STR(pci_cfg_access_unlock) },
	{ 0xda0dff19, __VMLINUX_SYMBOL_STR(pci_cfg_access_lock) },
	{ 0x13983529, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x1d683305, __VMLINUX_SYMBOL_STR(pci_reset_function) },
	{ 0x255b1b35, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0x5944d015, __VMLINUX_SYMBOL_STR(__cachemode2pte_tbl) },
	{ 0xea46a22a, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xb7723da1, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xbd478b65, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x10891994, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x5467ec4b, __VMLINUX_SYMBOL_STR(uio_unregister_device) },
	{ 0x97b3b2cd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xf4cb1863, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0xacf5c918, __VMLINUX_SYMBOL_STR(pci_num_vf) },
	{ 0x24643a38, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uio";


MODULE_INFO(srcversion, "964321D18A4C7273AE8B3D5");
