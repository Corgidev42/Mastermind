#include <stdio.h>
#include <stdlib.h>

void print_line()
{
	printf("____\n");
}

void print_hidden_line()
{
	printf("****\n");
	for (int i = 0; i < 2000; i++)
		printf("\n");
}

size_t ft_strlen(const char *s)
{
	size_t i = 0;
	while (s[i])
		i++;
	return i;
}

char *get_user_input()
{
	char *input = malloc(5 * sizeof(char));
	if (!input)
	{
		printf("Erreur d'allocation mémoire.\n");
		exit(1);
	}

	printf("Entrez 4 caractères (0 ou 1) : ");
	while (1)
	{
		scanf("%4s", input);
		if (ft_strlen(input) == 4)
		{
			int valid = 1;
			for (int i = 0; i < 4; i++)
			{
				if (input[i] != '0' && input[i] != '1')
				{
					valid = 0;
					break;
				}
			}
			if (valid)
				break;
			else
				printf("Entrée invalide. Veuillez entrer exactement 4 caractères (0 ou 1).\n");
		}
		else
			printf("Entrée invalide. Veuillez entrer exactement 4 caractères (0 ou 1).\n");
	}
	return input;
}

int is_same(char *user1, char *user2)
{
	for (int i = 0; i < 4; i++)
	{
		if (user1[i] != user2[i])
			return 0;
	}
	return 1;
}

void nb_good_occurence(char *user1_input, char *user2_input)
{
	int occurence = 0;
	for (int i = 0; i < 4; i++)
	{
		if (user1_input[i] == '1' && user2_input[i] == '1')
			occurence++;
	}
	printf("Result: %d\n", occurence);
}

int main()
{
	char *user1_input;
	char *user2_input;

	print_line();
	printf("Player 1, À toi de jouer !\n");
	user1_input = get_user_input();
	print_hidden_line();

	printf("Player 2, À ton tour de jouer !\n");
	printf("Player 2, tu dois deviner le code de Player 1\n");

	do
	{
		user2_input = get_user_input();
		nb_good_occurence(user1_input, user2_input);
	} while (!is_same(user1_input, user2_input));

	printf("You win!\n");

	free(user1_input);
	free(user2_input);

	return 0;
}
