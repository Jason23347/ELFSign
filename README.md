# ELFSign

### 0x01 介绍

---
该项目用于给ELF文件进行签名，并将签名存储至一个新的section中。

### 0x02 安装方式

---
```shell script
mkdir build
cd build
cmake ..
make
```

### 0x03 使用方法

---
可以给ELF文件签名与验证，验证通过后可执行：
```usage
USAGE: ./ELFSign [options] file...
Options:
        -c, --check Check ELF file and execute it
        -s, --sign Sign a ELF file
        -g, --generate Generate public and private key pair
        -p, --path Set the path of public/private key
        -e, --elf Set the path of ELF file

Example:
         ./ELFSign --sign -p ./prikey.pem -e hello.out
         ./ELFSign -c -p ./pubkey.pem -e hello.out
```

