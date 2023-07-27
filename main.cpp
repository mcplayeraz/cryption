#include <iostream>
#include <cstring>
using namespace std; 

void getpath(char* arr, int len); 
int main(int argc, char **argv)
{
	int c, key; 
	char fs_path[64], fd_path[64];
	

	cout << "cryption for Windows. \n"; 

	if (argc > 1) {
		if (strcmp(argv[1], "help") == 0) {
			cout << "cryption is a simple tool that allows you to encryption and decryption by a int key. \n\n"; 
			cout << "Usage: cryption <command>\n\n"; 
			cout << "These are common commands used in various situation: \n"; 
			cout << "\thelp\t\tshow how to use cryption\n"; 
			cout << "\texample\t\tshow some example to use cryption" << endl; 
			return 0; 
		} else if (strcmp(argv[1], "example") == 0) {
			cout << "Example1: \n\tSource file: abc\\n\n\tDestination file: \\n\n\
comment: default destination file name is outfile\n\n"; 
			cout << "Example2: \n\tSource file: c:\\1.txt\\n\n\tDestination file: 2.txt\\n\n\
comment: the absolute path and the relative path are both available" << endl; 
			return 0; 
		} else {
			cout << "Unknown argument. \n"; 
			cout << "Type 'cryption help' for help. " << endl; 
			return 0; 
		}
	}

	cout << "Source file: "; 
	getpath(fs_path, 64); 
	cout << "Destination file(default for outfile): "; 
	getpath(fd_path, 64); 
	cout << "Input key: "; 
	cin >> key; 
	if (fd_path[0] == '\0') {
		strcpy(fd_path, "outfile"); 
	}

	FILE* fs = fopen(fs_path, "rb"); 
	if (!(fs)) {
		cout << "Error when opening source files. " << endl;
		exit(1); 
	}
	FILE* fd = fopen(fd_path, "wb"); 
	if (!(fd)) {
		cout << "Error when opening destination files. " << endl; 
		exit(1); 
	}
	cout << "Starting converting... " << endl; 
	while((c = fgetc(fs)) != EOF) {
		c ^= key; 
		fputc(c, fd); 
	}
	cout << "Finished. " << endl; 
}

void getpath(char* arr, int len)
{
	cin.getline(arr, len); 
	for (int i = 0; i < len; ) {
		if (arr[i] == '\"') {
			for (int j = i + 1; j < len; j++) {
				arr[j - 1] = arr[j]; 
			}
		} else {
			i++; 
		}
	}
	return; 
}
