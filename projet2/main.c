#include <stdlib.h>
#include <stdio.h>

int main(void){
	int random_number = rand() % 101;//nombre alléatoire entre 0 et 100.
	int player_number = 0;

	while (player_number != random_number){
		if(player_number > random_number){
			printf("Entrez un nombre inférieur à %d -> \n",player_number);
			scanf("%d",&player_number);
		}else{
			printf("Entrez un nombre supérieur à %d -> \n",player_number);
			scanf("%d",&player_number);
		}
	}

	printf("Bravo vous avez le trouvé le nombre était bien %d !\n", random_number);
}

