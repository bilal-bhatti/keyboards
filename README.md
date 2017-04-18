# keyboards

Setup
---
Install avr toolchain using homebrew

```
brew tap osx-cross/avr
brew install avr-libc
brew install avrdude --with-usb
```

Build
-----
```
$ git clone https://github.com/bilal-bhatti/keyboards.git
$ cd keyboards
$ git submodule update --init --recursive
cd <keyboard directory>
$ make dfu
```
