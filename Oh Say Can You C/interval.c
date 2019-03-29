#include <stdio.h>
#include <string.h>


char* key[12] = {"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};
int numKeys = 12;
int maxSize = 6;

void minorSecond(char* noteOne , char* noteTwo, char* key[], int size){
    int noteOne = 0;
    int noteTwo = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(noteOne, key[i], maxSize)==0){
            noteOne = i;
            noteTwo = i + 1;
                
        }
    printf("%d","Minor Second = {", key[intervalRoot], key[intervalRoot+1]%12, "}");
}

void majorSecond(char* noteOne , char* noteTwo, char* key[], int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Major Chord = {", key[intervalRoot], key[intervalRoot+2]%12, "}");
}

void minorThird(char* noteOne , char* noteTwo, char* key[] int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(Root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Minor Third = {", key[intervalRoot], key[intervalRoot+3]%12, "}");
}

void majorThird(char* noteOne , char* noteTwo, char*key[], int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Major Third = {", key[intervalRoot], key[intervalRoot+4]%12, "}");
}

void perfectFourth(char* noteOne , char* noteTwo, char* key[], int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Perfect Fourth = {", key[intervalRoot], key[intervalRoot+5]%12, "}");
}

void tritone(char* noteOne , char* noteTwo, char* key[], int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Tritone = {", key[intervalRoot], key[intervalRoot+6]%12, "}");
}

void perfectFifth(char* noteOne , char* noteTwo, char* key[], int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Perfect Fifth = {", key[intervalRoot], key[intervalRoot+7]%12, "}");
}

void minorSixth(char* noteOne , char* noteTwo, char* key [], int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Minor Sixth = {", key[intervalRoot], key[intervalRoot+8]%12, "}");
}

void majorSixth(char* noteOne , char* noteTwo, char* key[] int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Major Sixth = {", key[intervalRoot], key[intervalRoot+9]%12, "}");
}

void majorSeventh(char* noteOne , char* noteTwo, char* key[], int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Minor Seventh");
}

void majorSeventh(char* noteOne , char* noteTwo, char* key[] int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Major Seventh = {", key[intervalRoot], key[intervalRoot+11]%12, "}");
}

void perfectOctave(char* noteOne , char* noteTwo, char* key[], int size){
    int root = 0;
    for (int i = 0; i < argc; i++) {
        if(strncmp(root, key[i], maxSize)==0){
            root = i;
                
        }
    printf("%d","Perfect Octave = {", key[intervalRoot], key[intervalRoot+12]%12, "}");
}


int main(int argc, char *argv[]) {


    if (argc != 2) {
        printf("This program requires exactly one command line argument.");
        
    }
    for (int i = 1; i < numKeys; i++) {
        if((strcmp(argv[1], key[i])==0)) {
            foundCharacter = 1;
            minorSecond (argv[1], argv[2], key, maxSize);
            majorSecond (argv[1], argv[2], key, maxSize);
            minorThird (argv[1], argv[2], key, maxSize);
            majorThird (argv[1], argv[2], key, maxSize);
            perfectFourth (argv[1], argv[2], key, maxSize);
            tritone (argv[1], argv[2], key, maxSize);
            perfectFifth (argv[1], argv[2], key, maxSize);
            minorSixth (argv[1], argv[2], key, maxSize);
            majorSixth (argv[1], argv[2], key, maxSize);
            minorSeventh (argv[1], argv[2], key, maxSize);
            majorSeventh (argv[1], argv[2], key, maxSize);
            perfectOctave (argv[1], argv[2], key, maxSize);
        }
    }
    if (foundCharacter == 0) {
        printf("No such key: {%s}", argv[1]);
    }

    return 0;
}