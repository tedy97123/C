// Quick notes
// %u to print unsigned integers


#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdint.h>
#include<stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
    char name[MAX_NAME];
    int age;
    // add other shit late pimp
} person;

person * hash_table[TABLE_SIZE];

unsigned int hash (char *name){
    int length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;
    for(int i=0; i< length; i++){
        hash_value += name[i];// add each charted in input string to hash_value
        hash_value = (hash_value * name[i]) % TABLE_SIZE; // multipuly sum by charcter value (furhter randomization) then divides by modulous operator to constrict to the bounds of the hash_value to the table size.
    }
    return hash_value;
}
// goes through the length of the string input and adds up the value of the charcters

void init_hash_table(){
    for (int i=0; i < TABLE_SIZE; i++){
        hash_table[i] = NULL;
    }
    // Table starts empty
}

void print_table(){
    for (int i=0; i< TABLE_SIZE; i++) {
        if (hash_table[i] == NULL){
            printf ("\t%i\t---\n",i);
        } else {
            printf ("\t%i\t%s\n",i,hash_table[i]->name);
        }
    }
}
bool hash_table_insert(person *p){
    if(p == NULL) return false;
    int index = hash(p->name);
    if(hash_table[index] != NULL){
        return false;
    }
    hash_table[index] = p;
    return true;
}
int main(){

    init_hash_table();
    print_table();

/*     printf("Jacob => %u\n", hash("Jacob"));
    printf("Tedy => %u\n", hash("Tedy"));
    printf("Loretta => %u\n", hash("Loretta"));
    printf("Hung => %u\n", hash("Hung"));
    printf("Hannah => %u\n", hash("Hannah"));
    printf("Craig => %u\n", hash("Craig"));
    printf("Melissa => %u\n", hash("Melissa"));
    printf("Titan => %u\n", hash("Titan"));
    printf("Maple => %u\n", hash("Maple"));  */
    return 0;
}