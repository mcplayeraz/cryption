# About

cryption is a simple tool that allows you to encryption and decryption by a int key. 

## Build

**Note: you may need to install g++ before build**
First, you have to clone this repo: 

```cmd
git clone https://github.com/mcplayeraz/cryption.git
```

Second, go to the 'cryption' folder:
```cmd
cd cryption
```

Then, use 'make' to compile the apps: 
```cmd
make
```

If you didn't see any error messages, the program now can come into use. 

## Run

**Note: the executable file in 'out' folder is built on Windows**

You can go to 'out' folder and run the program:
```cmd
cd out
./cryption.exe
```

You can also directly use 'make run' to run it:
```cmd
make run
```

To add some arguments, you can add it after executable file:
```cmd
./cryption.exe ...
```

If you use make, you should set VAR:
```cmd
make run VAR=...
```
