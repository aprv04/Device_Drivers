obj-m=multi_dev.o
KERN_DIR=/lib/modules/$(shell uname -r)/build
PWD=$(shell pwd)

modules:
	$(MAKE) -C ${KERN_DIR} M=${PWD} modules
clean:
	$(MAKE) -c ${KERN_DIR} M=${PWD} clean
