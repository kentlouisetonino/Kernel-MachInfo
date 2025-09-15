## Description

> - A simple Kernel Module project that display the machine information.

<img width="663" height="305" alt="Screenshot from 2025-08-25 11-11-24" src="https://github.com/user-attachments/assets/ea38b741-2fb0-45e1-8aa5-eb7b0a09836a" />




<br />
<br />



## Setup

> - Make sure you installed the build modules necessary for your Linux Kernel version.

```sh
sudo apt update
sudo apt install linux-headers-$(uname -r)
```

> - Run the following commands.

```sh
# * Build the module.
make all

# * Insert the module.
make insert-module

# * View the module diagnostic message.
sudo dmesg | tail -10

# * Remove the module.
make remove-module.

# * Clean and remove the generated files.
make clean
```
