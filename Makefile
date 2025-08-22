obj-m += machinfo.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

make clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
