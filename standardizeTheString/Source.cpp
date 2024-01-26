#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;

void standardize(char name[]) {
	name[0] = toupper(name[0]);
	for (int i = 1; i < strlen(name); i++)
		name[i] = tolower(name[i]);
}

int main() {
	char name[50]; 
	cout << "Enter your name: ";
	cin.getline(name, 50);
	char array[10][50];
	int index = 0;
	char* token = strtok(name, " ");
	while (token != NULL)
	{
		strcpy(array[index], token);
		index++;
		token = strtok(NULL, " ");
	}

	cout << "\nIf your name were to be standardized: ";
	for (int i = 0; i < index; i++) {
		standardize(array[i]);
		cout << array[i];
		if (i != index - 1)
			cout << " ";
	}

}