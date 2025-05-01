# `hostnamgr`
A much simpler, and 1000x times shittier version of `hostnamectl`. Setting your hostname in the world's shittiest way ever exist 💔

> the dev is kind of stupid motherfucker so he wrote ts (this shit)<br>sybau 💔

## HW/SW Requirements
1. A working 🥔 PC
2. Linux with any distribution 🐧

> as long it can boot lmao 💀

## Usage
```
hostnamgr [OPTIONS]
```

### Multiple parameters
Remember that you can also put multiple parameters in sequential order

```
$ sudo hostnamgr --max --get --set "shitty-potato-pc"
Kernel hard limit: 64 bytes
Current hostname: shit-pc
Current: shit-pc
Requested: shitty-potato-pc
Attempting to apply hostname...
Succeeded.
```

### Parameters
#### `--get`
Obtain your current hostname using `gethostname()`.

```
$ hostnamgr --get
Current hostname: shit-pc
```

#### `--max`
Obtain the hostname character limit (which usually 64 bytes). This is exactly same as `HOST_NAME_MAX` macro in `limits.h` header.

```
$ hostnamgr --get-max
Kernel hard limit: 64 bytes
```

#### `--set <name>`
Set your hostname temporarily. Note that these changes will not be persistent and will be removed at the next reboot. This parameter **requires `root` permission**.

```
$ sudo hostnamgr --set "shittiest-pc"
Current: shit-pc
Requested: shittiest-pc
Attempting to apply hostname...
Succeeded.
```

#### `--apply`
Apply hostname from `/etc/hostname` file. This parameter **requires `root` permission**.

```
$ sudo ./a.out --apply
Attempting to read "/etc/hostname" file...
Read 4 bytes (have 4 bytes)
Read 4 bytes (have 8 bytes)
Current: (none)
Requested: shitty-pc
Attempting to apply hostname...
Succeeded.
```

## Building
Please remember to **modify the `build.sh` before building**.
> the dev ~can't even~ **is too much lazy to** write a Makefile or even better use Meson<br>icl ts pmo 💔🥀

### Prerequisites
0. brain 🧠💥
1. Compiler (e.g., GCC) - modify the build script
2. Free space with at least 3.1 MiB (3214583 bytes)


### Dependencies
1. `glibc`
2. `libstdc++`

### Compiling
Clone the repository first, then `cd` into the project directory. Modify your `build.sh` before compiling, and finally run:
```
chmod "uga+x" "build.sh"
./build.sh
```

or

```
bash "build.sh"
```

## License
This project is licensed under The MIT License. Please refer to `LICENSE` file for more information.


---
icl ts pmo sm n sb rn ngl, r u srsly srs n fr rn vro? lol atp js go 💔... b fr vro, idek nm, brb gng gtg atm lmao, bt ts pyo 2 js lmk lol onb fr, sybau gng 🥀