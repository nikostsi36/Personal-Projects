#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void print_status(int tries, char* letters){
	printf("You have %d tries left. The word so far is %s.\n", tries, letters);
}


int check_word(char *letters, int len){
	int i, ret, nikos = 0;
	for (i=0; i<len; i++){
		if (letters[i] == '_'){
			nikos += 1;
		}
	}
	if(nikos == 0){
		return 1;
	}
	else{
		return 0;
	}
}


int main(int argc, char **argv){

	int tries = atoi(argv[1]);
	int i;

	printf("Eykairies: %d\n", tries);

	char *s = argv[2];
	int len = strlen(s);

	char *letters;
	letters = (char*)malloc((len+1) * sizeof(char));

	for (i=0; i<len; i++){
		letters[i] = '_';
	}

	letters[len] = '\0';

	print_status(tries, letters);

	char *wrong;
	wrong = (char*)malloc((tries) * sizeof(char));
	for (i=0; i<tries; i++){
		wrong[i] = '_';
	}


	char get;

	while (tries>0){	
		tries -=1;
		get = getchar();
		getchar();
		for (i=0; i<len; i++){
			if (s[i] == get){
				letters[i] = get;
			}
		}
		print_status(tries, letters);

	
		if (check_word(letters, len) == 1){
			printf("Congratulations!\n");
			break;
		}
		
	}
	if (check_word(letters, len) == 0){
		printf("Eisai axristos.\n");
	}
	return 0;
}
