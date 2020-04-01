#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "testdata.txt"
#define STsize 1000	//size of string table
#define HTsize 100	//size of hash table

// more define variables��
typedef struct HTentry *HTpointer;
typedef struct HTentry {
	int index;		//index of identifier in ST
	HTpointer next;	//pointer to next identifier
} HTentry;

enum errorTypes { noerror, illsp, illid, overst };
typedef enum errorTypes ERRORtypes;

char seperators[] = " .,;:?!\t\n";

HTpointer HT[HTsize];
char ST[STsize];

// more global variables��
ERRORtypes err;

FILE *fp; //to be a pointer to FILE
char input;

bool found;
int nextid;
int nextfree;
int hashcode;

//Initialize - open input file
void initialize() {
	fp = fopen(FILE_NAME, "r");
	input = fgetc(fp);
}

void PrintHeading() {
	printf("--------------		------------\n");
	printf(" Index in ST		identifier\n");
	printf("--------------		------------\n");
}

// Skip Seperators - skip over strings of spaces,tabs,newlines, . , ; : ? !
//					 if illegal seperators,print out error message.
void SkipSeperators() {

}

// PrintHStable - Prints the hash table.write out the hashcode and the list of identifiers
//				  associated with each hashcode,but only for non-empty lists.
//				  Print out the number of characters used up in ST.
void PrintHStable() {

}

// PrintError - Print out error messages
//				overst : overflow in ST
//				print the hashtable and abort by calling the function "abort()".
//				illid : illegal identifier
//				illsp :illegal seperator
void PrintError(ERRORtypes err) {

}

//ReadIO - Read identifier from the input file the string table ST directly into
//		   ST(append it to the previous identifier).
//		   An identifier is a string of letters and digits, starting with a letter.
//		   If first letter is digit, print out error message.
void ReadID() {

}
//			   characters and then taking the sum modulo the size of HT.
void ComputeHS(int nid, int nfree) {

}

// LookupHS - For each identifier,Look it up in the hashtable for previous occurrence
//			  of the identifier.If find a match, set the found flag as true.
//			  Otherwise flase.
//			  If find a match, save the starting index of ST in same id.
void LookupHS(int nid, int hscode) {

}

// ADDHT - Add a new identifier to the hash table.
//		   If list head ht[hashcode] is null, simply add a list element with
//		   starting index of the identifier in ST.
//		   IF list head is not a null , it adds a new identifier to the head of the chain
void ADDHT(int hscode) {

}
		  Compute its hashcode.
		  Look up the idetifier in hashtable HT[hashcode]
		  If matched, delete the identifier from ST and print ST - index
		  of the matching identifier.
		  If not matched, add a new element to the list, pointing to new identifier.
		  Print the identifier, its index in ST, and whether it was entered or present.
		  Print out the hashtable, and number of characters used up in ST
*/
int main()
{
	PrintHeading();
	initialize();
		err = noerror;
		SkipSeperators();
		ReadID();
		if (input != EOF && err != illid) {
			if (nextfree == STsize) {
				// print error message
				PrintError(overst);
			}
			ST[nextfree++] = '\0';
			ComputeHS(nextid, nextfree);
			LookupHS(nextid, hashcode);
			if (!found) {
				// print message
				ADDHT(hashcode);
			}
			else {
				// print message
			}
		}
	}
	PrintHStable();
}