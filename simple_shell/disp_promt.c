#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
        char *keywords, *tok = NULL, tok2 = NULL,arguments[10];
        size_t buf = 0;
        int check = 1, i = 0;
	while (check != 0)	        
       {
                printf("$ ");
                arguments[0] = getline(&keywords, &buf, stdin);
                tok = strtok(keywords, "\n");
		check = strcmp(tok, "exit\0");
		if (arguments != check)
		{
			while(check != 0)
			{
				tok2[i] = strtok(keywords, " ", "-");
				arguments[0] = tok2
				i++;
				printf(tok2[i]);
	          	}
		}
		printf("%s\n", keywords);
        }
        free(keywords);
        return(0);
}

