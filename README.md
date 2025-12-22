# [A1](https://support.apple.com/en-us/111926)
![A1](a1.jpg)
- 2.6GHz quad-core Intel Core i7 (Turbo Boost up to 3.6GHz)
- 16GB (two 8GB) of 1600MHz DDR3 memory
- 1TB (5400-rpm) hard drive
- 2TB SSD Crucial

## Catalina
-  macOS 10.15 Catalina, from 2019, is the last supported. 
- [In which month or year Catalina will stop to be supported ?](https://discussions.apple.com/thread/255619465)
 
## Omarchy
- time to try installing omarchy on it
- [The Omarchy Manual](https://learn.omacom.io/2/the-omarchy-manual)
```
curl -O https://iso.omarchy.org/omarchy-3.1.7.iso
diskutil list # what disk is usb?
sudo dd if=omarchy-3.1.7.iso of=/dev/usb_disk bs=1M conv=sync
```
## [a1.c](https://github.com/5eed1ab/A1/blob/main/a1.c)
### a1.c modified to use `%s`, `%c`, `%d`, `%p` and `\n` in printf
- `int` is a data type which stores whole numbers 
  - `int i`
- `char` is a byte storing a single ASCII value like '?' or 63
  - `char character`
- C does not have a String type to easily create string variables. 
  - Instead, you must use the char type and create an array of characters.
  - `char characters[]`
  - `char string[]`

- `for` loop loops through a block of code a number of times.
  - `for(i=0;i<=7;i++)`
#### printf format specifiers and escape sequences
| format | description |
|-------:|:------------|
%s       | The char * argument is expected to be a pointer to an array of character type (pointer to a string).  Characters from the array are written up to (but not including) a terminating NUL character; if a precision is specified, no more than the number specified are written.  If a precision is given, no null character need be present; if the precision is not specified, or is greater than the size of the array, the array must contain a terminating NUL character.|
%c       | The int argument is converted to an unsigned char, and the resulting character is written.
%d, %i       | The int argument is converted to signed decimal notation. The precision, if any, gives the minimum number of digits that must appear; if the converted value requires fewer digits, it is padded on the left with zeros.  The default precision is 1.  When 0 is printed with an explicit precision 0, the output is empty.
%p       | The void * pointer argument is printed in hexadecimal 
\n       | The ASCII value 10 represents the Line Feed (LF) control character, often shown as `\n`, used to start a new line in text

### String Shenanigans
format a table with character `%c`, decimal `%d`, and use pointer`%p` to display memory address

`char string[]="String";`

|string[]     | string[0]=S | string[1]=t | string[2]=r | string[3]=i | string[4]=n | string[5]=g | string[6]=\0|
|:-----------:|:-----------:|:-----------:|:-----------:|:-----------:|:-----------:|:-----------:|:-----------:|
|decimal      |      83     |     116     |     114     |     105     |     110     |     103     |       0     |
|address      | 0x16eff2f14 | 0x16eff2f15 | 0x16eff2f16 | 0x16eff2f17 | 0x16eff2f18 | 0x16eff2f19 | 0x16eff2f1a |

`make`
```
gcc a1.c -o a1
```

`./a1`
```
Hello, is there anybody in there?

|string[]     | string[0]=S | string[1]=t | string[2]=r | string[3]=i | string[4]=n | string[5]=g | string[6]=\0|
|:-----------:|:-----------:|:-----------:|:-----------:|:-----------:|:-----------:|:-----------:|:-----------:|
|decimal      |      83     |     116     |     114     |     105     |     110     |     103     |       0     |
|address      | 0x16f62af14 | 0x16f62af15 | 0x16f62af16 | 0x16f62af17 | 0x16f62af18 | 0x16f62af19 | 0x16f62af1a |
```
### Read the man pages
man          | Description
|------------|-------------------------------------------------------------------------------------------|
man less     | less - opposite of more
man man      | the man utility finds and displays online manual documentation pages
man make     | to determine automatically which pieces of a large program need to be recompiled
man ascii    | ascii – octal, hexadecimal and decimal ASCII character sets
man printf   | printf – formatted output
man 3 printf | the printf() family of functions produces output according to a format as described below.
man 3 stdio  | the standard I/O library provides a simple and efficient buffered stream I/O interface