obj-m += machinfo.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

insert-module:
	sudo insmod ./src/machinfo.ko

remove-module:
	sudo rmmod ./src/machinfo.ko
