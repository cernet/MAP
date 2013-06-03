obj-m		+=	ivi.o
ivi-objs	:=	ivi_rule.o ivi_rule6.o ivi_map.o ivi_map_tcp.o ivi_xmit.o ivi_nf.o ivi_ioctl.o ivi_module.o
KERNELDIR	:=	/lib/modules/$(shell uname -r)/build
PWD		:=	$(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	rm -rf *.ko *.o *.mod.c core Module.symvers Module.markers modules.order .*.cmd .tmp_versions
