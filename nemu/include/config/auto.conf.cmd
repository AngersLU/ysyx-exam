deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	/home/lff/ysyx-workbench/nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
