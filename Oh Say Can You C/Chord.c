#include <stdio.h>
#include <string.h>


    char* key[12] = {"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};
    int numKeys = 12;
    int maxSize = 6;
    int foundCharacter = 0;
    
    
    void major (char* root, char* key[], int size) {
        int beginning = 0;
        for (int i = 0; i < 12; i++) {
            if(strncmp(root, key[i], maxSize)==0){
                beginning = i;
            }
        }
        printf("%s %s %s\n", key[beginning], key[(beginning+4)%12], key[(beginning+7)%12]);
    }

    void minor (char *root, char* key[], int size) {
        int beginning = 0;
        for (int i = 0; i < 12; i++) {
            if(strncmp(root, key[i], maxSize)==0){
                beginning = i;  
            }
        }
        printf("%s : %s %s\n", key[beginning], key[(beginning+3)%12], key[(beginning+7)%12]);
    }

    void dimSeven (char* root, char* key[], int size) {
        int beginning = 0;
        for (int i = 0; i < 12; i++) {
            if(strncmp(root, key[i], maxSize)==0){
                beginning = i;
                }
        }
        printf("%s : %s %s %s\n", key[beginning], key[(beginning+3)%12], key[(beginning+6)%12], key[(beginning+9)%12]);
    }
    
    void domSeven (char* root, char* key[], int size) {
        int beginning = 0;
        for (int i = 0; i < 12; i++) {
            if(strncmp(root, key[i], maxSize)==0){
                beginning = i;
            }
        }
        printf("%s : %s %s %s\n", key[beginning], key[(beginning+4)%12], key[(beginning+7)%12],key[(beginning+8)%12]);
    }
    
int main(int argc, char* argv[]) {

    if (argc != 2) {
        printf("This program requires exactly one command line argument.");
        
    }
    for (int i = 1; i < numKeys; i++) {
        if((strcmp(argv[1], key[i])==0)) {
            foundCharacter = 1;
            major (argv[1], key, maxSize);
            minor (argv[1], key, maxSize);
            dimSeven (argv[1], key, maxSize);
            domSeven (argv[1], key, maxSize);
        }
    }
    if (foundCharacter == 0) {
        printf("No such key: {%s}", argv[1]);
    }

    return 0;
}