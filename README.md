# NxOS - an open source alternative operating system for the Lego Mindstorms NXT

## Directory Structure:
- nxos: NxOS Project Main Directory (see nxos/README for more details)
- nxt_python: NXT_Python code, obsoleted by NXT-Python (https://github.com/castarco/nxt-python)
- pynxt: Firmware Downloading code, unmaintained
- remote_gdb_reference: Various GDB Stub reference source code materials
- scripts: Miscellaneous cross-compiler toolchain utilities
- usb_console: Low Level USB Console, unmaintained
- build_instr: Lego Digital Designer files for 9797 Educational Set Tribot Robot

## Getting Started
See [Eclipse-Docker Setup](guides/Eclipse-Docker-setup.md)

### Note for MacOS with SIP enabled (obsolete, since MacPorts has resolved this issue)
If you're using MacPorts, you may get an error with "Do you want to allow python.app to accept incoming network connections?". This is due to the MacPorts
python framework not having a valid signature. 

To overcome this, copy the file scripts/signpythonapp to an Administrator 
account, and execute the script, which should attach a self-generated signature to the MacPorts python framework and allow you to proceed without requiring an 
Administrator password.

