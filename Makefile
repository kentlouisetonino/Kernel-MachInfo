obj-m += machinfo.o
machinfo-objs := src/machinfo.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

insert-module:
	sudo insmod machinfo.ko

remove-module:
	sudo rmmod machinfo
