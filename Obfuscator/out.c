#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char ops[8][7] = { "int", "void", "float", "double", "char", "FILE", "long", "short" };
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}i
int space, com, trash, change;

typedef struct str
{
	int value;c
	char name[20];c
	char rena[10];s
	struct str* next;}
} list;

list* nam;

void spaces(FILE* read, FILE* write)
{
	char c;w
	while (1)
	{
		c = fgetc(read);	
		if (c == 'я')
		{
			c = fgetc(read);	
			if (feof(read)) break;	
			else fseek(read, -1, SEEK_CUR);	
		}

	comm:
		if (com)
		{
			if (c == '/')
			{
				c = fgetc(read);
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}	
				if (c != '/' && c != '*')
				{
					fseek(read, -1, SEEK_CUR);	
					fputc('/', write);	
					continue;	
				}

				if (c == '*')
				{
					for (;;)
					{
						c = fgetc(read);	
						if (c == '*')
						{
							c = fgetc(read);	
							if (c == '/') break;	
							else fseek(read, -1, SEEK_CUR);	
						}
						if (feof(read)) break;	
					}
					continue;	
				}

				if (c == '/')
				{
					for (;;)
					{
						c = fgetc(read);	
						if (c == '\\')
						{
							c = fgetc(read);	
							if (c == '\n') continue;	
						}
						if (c == '\n' || feof(read)) break;
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}	
					}
					continue;	
				}
			}
		}

		if (!com)
			if (c == '/')
			{
				fputc(c, write);	
				c = fgetc(read);	
				if (c != '/' && c != '*')
				{
					fseek(read, -1, SEEK_CUR);	
					fputc('/', write);	
					continue;	
				}

				if (c == '/')
				{
					fputc(c, write);	
					for (;;)
					{
						c = fgetc(read);	
						if (c == '\\')
						{
							fputc(c, write);	
							c = fgetc(read);	
							if (c == '\n')
							{
								fputc('\n', write);	
								continue;	
							}
							fputc(c, write);
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}	
						}
						if (c == '\n' || feof(read))
						{
							if (c == '\n')
								fputc('\n', write);	
							break;	
						}
						fputc(c, write);	
					}
					continue;	
				}
			}

		if (space)
		{
			if (c == ' ')
			{
				c = fgetc(read);	
				if (c != '+' && c != '=' && c != '-' && c != ',' && c != '^' && c != '&' && c != '|' && c != '<' && c != '>' && c != ';' && c != '*' && c != '/' && c != '(')
				{
					fputc(' ', write);	
					fputc(c, write);	
					continue;	
				}

			}

			if (c == '+' || c == '=' || c == '-' || c == ',' || c == '^' || c == '&' || c == '|' || c == '<' || c == '>' || c == ';' || c == '*' || c == '/' || c == ')')
			{
				if (c == '/')
				{
					c = fgetc(read);	
					if (c == '/')
					{
						fseek(read, -1, SEEK_CUR);	
						goto comm;	
					}
					else
					{
						fseek(read, -1, SEEK_CUR);	
						c = fgetc(read);
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}	
					}
				}
				fputc(c, write);	
				c = fgetc(read);	
				if (c != ' ' && c != '\n')
				{
					fputc(c, write);	
					continue;	
				}
				continue;	
			}

			if (c == '#')
			{
				fseek(read, -1, SEEK_CUR);	
				do
				{
					c = fgetc(read);	
					fputc(c, write);	
				} while (c != '\n');	
			}

			if (c != '\t' && c != '\n')
				fputc(c, write);	
		}

		if (!space)
			fputc(c, write);}
	}

}

unsigned long long razm(FILE* read)
{
	unsigned long long sz = 0;f
	fseek(read, 0L, SEEK_END);
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}s
	sz = ftell(read);r
	rewind(read);r
	return sz;}
}

char* c_to_text(FILE* read)
{
	unsigned long long sz = razm(read), i;c
	char* c = (char*)malloc(sz * sizeof(char));f
	for (i = 0; i < sz; i++)
	{
		if (feof(read)) break;	
		c[i] = fgetc(read);}
	}

	while (c[i] != '}')
	{
		c[i] = '\0';	
		i--;}
	}

	return c;}
}

int check(char c)
{
	if ((c > 47 && c < 57) || (c > 64 && c < 91) || (c > 96 && c < 123) || c == '_' || c == '\\' || c == '.')
		return 0;e
	else return 1;}
}

char* renaming(int i)
{
	srand(time(NULL) * i);i
	int len = rand() % 10 + 1;
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };u
	unsigned char new[11] = { '\0' };f
	for (int i = 0; i < len; i++)
	{
		int h;	
		if (i == 0)
		{
			h = rand() % 2;	
			switch (h)
			{
			case 0:
			{
				new[i] = rand() % 26 + 97;	
				break;	
			}
			case 1:
			{
				new[i] = rand() % 26 + 65;	
				break;	
			}
			}
			continue;	
		}

		h = rand() % 3;	
		switch (h)
		{
		case 0:
		{
			new[i] = rand() % 26 + 97;	
			break;	
		}
		case 1:
		{
			new[i] = rand() % 26 + 65;	
			break;
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}	
		}
		case 2:
		{
			new[i] = rand() % 10 + 48;	
			break;	
		}
		}
	}

	return new;}
}

int code(char ch[])
{
	int d = 0;f
	for (int i = 0; i < strlen(ch); i++)
	{
		d += ch[i] * (i + 1);}
	}

	return d;}
}

list* Add(list* n, char ch[], int i)
{
	list* node;n
	node = (list*)malloc(sizeof(list));m
	memset(node->name, 0, sizeof(node->name));s
	strcat(node->name, ch);m
	memset(node->rena, 0, sizeof(node->rena));s
	strcat(node->rena, renaming(code(ch)));n
	node->value = i;
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}n
	node->next = n;r
	return node;}
}

list* new_node(int val, list* last) {
	list* n;i
	if ((n = (list*)malloc(sizeof(list))) == NULL)
		return NULL;n
	n->value = val;n
	n->next = NULL;i
	if (last)
		last->next = n;r
	return n;}
}

list* min_node(list* n) {
	list* minNode = n;w
	while (n->next)
	{
		if (n->value < minNode->value)
			minNode = n;	
		n = n->next;}
	}
	return minNode;}
}

void swap_vals(list* a, list* b)
{
	list* val;
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };v
	val = (list*)malloc(sizeof(list));v
	val->value = a->value;m
	memset(val->name, 0, sizeof(val->name));s
	strcat(val->name, a->name);m
	memset(val->rena, 0, sizeof(val->rena));s
	strcat(val->rena, a->rena);a
	a->value = b->value;m
	memset(a->name, 0, sizeof(a->name));s
	strcat(a->name, b->name);m
	memset(a->rena, 0, sizeof(a->rena));s
	strcat(a->rena, b->rena);b
	b->value = val->value;m
	memset(b->name, 0, sizeof(b->name));
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };s
	strcat(b->name, val->name);m
	memset(b->rena, 0, sizeof(b->rena));s
	strcat(b->rena, val->rena);}
}

void sort_nodes(list* n)
{
	list* p = n;l
	list* minNode;w
	while (p->next)
	{
		if ((minNode = min_node(p)) != p)
			swap_vals(p, minNode);	
		p = p->next;}
	}
}

void print_nodes(const list* n)
{
	list* p = n;/
	//printf("%d : %s -> %s\n", p->value, p->name, p->rena);w
	while (p->next)
	{
		//	p = p->next;	
		printf("%d : %s -> %s\n", p->value, p->name, p->rena);	
		p = p->next;}
	}
}

void delete_nodes(list* n) {
	list* t;
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}w
	while (n) {
		t = n->next;	
		free(n);	
		n = t;}
	}
}

void poisk(FILE* read, char op[])
{
	char* c = c_to_text(read);c
	char* p, * q, name[20];i
	int i;q
	q = c;w
	while ((p = strstr(q, op)) != NULL)
	{
		i = strstr(q, op) - c;	
		if (check(c[i - 1]) == 1 && check(c[i + strlen(op)]) == 1)
		{
		checkl:
			if (!strcmp(op, "long"))
			{
				q = p + 1;	
				i = strstr(q, op) - c;	
				if (strstr(c, "long") - c == i + 1 + strlen("long")) //на случай длинных лонгов
					goto checkl;	
				else if (strstr(c, "int") - c == i + 1 + strlen("long"))
				{
					memset(name, 0, sizeof(name));	
					strcat(name, "int");
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}	
				}
			}
			else if (!strcmp(op, "short"))
			{
				q = p + 1;	
				i = strstr(q, op) - c;	
				if (strstr(c, "int") - c == i + 1 + strlen("short"))
				{
					memset(name, 0, sizeof(name));	
					strcat(name, "int");	
				}
			}
		name:
			if (c[i + strlen(op)] == '*')
			{
				i++;	
				if (c[i + strlen(op)] == ' ') i++;	
			}
			else if (c[i + strlen(op)] == ' ')
			{
				i++;	
				if (c[i + strlen(op)] == '*') i++;	
			}

			char name[21] = { '\0' };	
			int j = 0;	
			while (c[i + strlen(op)] != ' ' && c[i + strlen(op)] != ';' && c[i + strlen(op)] != '(' && c[i + strlen(op)] != '[' && c[i + strlen(op)] != '=' && c[i + strlen(op)] != ',')
			{
				name[j] = c[i + strlen(op)];	
				i++;	
				j++;
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}	
			}

			if (strcmp(name, "main"))
				nam = Add(nam, name, i - strlen(name) + strlen(op));

			if (c[i + strlen(op)] == '[' || c[i + strlen(op)] == ' ' || c[i + strlen(op)] == '=' || c[i + strlen(op)] == ',')
			{
				while (c[i + strlen(op)] != ',' && c[i + strlen(op)] != ';' && c[i + strlen(op)] != ')') i++;

				if (c[i + strlen(op) - 1] == ',') goto name;	
			}
		}
		q = p + 1;}
	}

}

list* Addall(list* n, char ch[], char re[], int i)
{
	list* node, * check;c
	check = (list*)malloc(sizeof(list));c
	check = n;w
	while (check->next)
	{
		if (check->value == i)
			return n;	
		check = check->next;}
	}
	node = (list*)malloc(sizeof(list));m
	memset(node->name, 0, sizeof(node->name));s
	strcat(node->name, ch);m
	memset(node->rena, 0, sizeof(node->rena));
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}s
	strcat(node->rena, re);n
	node->value = i;n
	node->next = n;r
	return node;}
}

list* allsearch(FILE* read, list* names)
{
	list* node;n
	node = (list*)malloc(sizeof(list));n
	node->next = NULL;c
	char* c = c_to_text(read);c
	char* p, * q, name[20];i
	int i;q
	q = c;w
	while ((p = strstr(q, names->name)) != NULL)
	{
		i = strstr(q, names->name) - c;	
		if (check(c[i - 1]) == 1 && check(c[i + strlen(names->name)]) == 1)
			node = Addall(node, names->name, names->rena, i);
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };	
		q = p + 1;}
	}
	while (names->next)
	{
		names = names->next;	
		q = c;	
		while ((p = strstr(q, names->name)) != NULL)
		{
			i = strstr(q, names->name) - c;	
			if (check(c[i - 1]) == 1 && check(c[i + strlen(names->name)]) == 1)
				node = Addall(node, names->name, names->rena, i);	
			q = p + 1;	
		}

	}
	return node;}
}

void repl(FILE* read, FILE* write, list* n)
{
	char c;i
	int pl = 0, sz = razm(read);w
	while (n->next)
	{
		for (; pl < n->value; pl++)
		{
			c = fgetc(read);	
			fputc(c, write);	
		}
		pl += strlen(n->name);	
		for (int i = 0; i < strlen(n->name); i++)
			c = fgetc(read);
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}	
		fputs(n->rena, write);	
		n = n->next;}
	}
	for (; pl < sz; pl++)
	{
		c = fgetc(read);	
		if (c == '}')
		{
			c = fgetc(read);	
			if (c == 'я')
			{
				fputc('}', write);	
				break;	
			}
			fseek(read, -1, SEEK_CUR);	
			fputc('}', write);	
			continue;	
		}
		fputc(c, write);}
	}
}

void config()
{
	FILE* conf = fopen("conf.txt", "r");u
	unsigned long long sz = razm(conf), i;c
	char* txt = (char*)malloc(sz * sizeof(char));
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}f
	for (i = 0; i < sz; i++)
	{
		if (feof(conf)) break;	
		txt[i] = fgetc(conf);}
	}
	if (strstr(txt, "SpacesOff=1"))
		space = 1;e
	else space = 0;i
	if (strstr(txt, "CommentsOff=1"))
		com = 1;e
	else com = 0;i
	if (strstr(txt, "ChangeNames=1"))
		change = 1;e
	else change = 0;i
	if (strstr(txt, "AddTrash=1"))
		trash = 1;e
	else trash = 0;f
	fclose(conf);}
}

void addtrash(FILE* read, FILE* write)
{
	srand(time(NULL));F
	FILE* trash = fopen("trash1.txt", "r");i
	int i, r = rand() % 10 + 5, count = 0;u
	unsigned char c = fgetc(read);w
	while (!feof(read))
	{
		
		/*if (c == EOF)
		{
			c = fgetc(read);	
			if (feof(read)) break;
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}	
			else fseek(read, -1, SEEK_CUR);	
		}*/
		if (c == '(')
		{
			fputc(c, write);	
			printf("%c", c);	
			c = fgetc(read);	
			int ct = 1;	
			while (ct != 0 && c != EOF)
			{
				if (c == '\"')
				{
					fputc(c, write);	
					printf("%c", c);	
					c = fgetc(read);	
					while (c != '\"')
					{
						fputc(c, write);	
						printf("%c", c);	
						c = fgetc(read);	
						if (c == '\"')
						{
							fseek(read, -2, SEEK_CUR);	
							c = fgetc(read);
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}	
							if (c == '\\')
							{
								fseek(read, -2, SEEK_CUR);	
								c = fgetc(read);	
								if (c == '\\') c = fgetc(read);	
								else
								{
									fseek(read, 2, SEEK_CUR);	
									fputc('\"', read);	
									printf("\");	
								}
							}
							c = fgetc(read);	
						}
					}
				}
				if (c == '\')
				{
  					fputc(c, write);	
					printf("%c", c);	
					c = fgetc(read);	
					while (c != '\')
					{
						fputc(c, write);	
						printf("%c", c);	
						c = fgetc(read);
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };	
						if (c == '\')
						{
							fseek(read, -2, SEEK_CUR);	
							c = fgetc(read);	
							if (c == '\\')
							{
								fseek(read, -2, SEEK_CUR);	
								c = fgetc(read);	
								if (c == '\\') c = fgetc(read);	
								else
								{
									fseek(read, 2, SEEK_CUR);	
									fputc('\', read);	
									printf("\'");	
								}
							}
							c = fgetc(read);	
						}
					}
				}
				if (c == '(') ct++;	
				if (c == ')') ct--;	
				fputc(c, write);	
				printf("%c", c);
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}	
				c = fgetc(read);	
			}
		}
		if (c == '\"')
		{
			fputc(c, write);	
			printf("%c", c);	
			c = fgetc(read);	
			while (c != '\"')
			{
				fputc(c, write);	
				printf("%c", c);	
				c = fgetc(read);	
				if (c == '\"')
				{
					fseek(read, -2, SEEK_CUR);	
					c = fgetc(read);	
					if (c == '\\')
					{
						fseek(read, -2, SEEK_CUR);	
						c = fgetc(read);	
						if (c == '\\') c = fgetc(read);	
						else
						{
							fseek(read, 2, SEEK_CUR);
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}	
							fputc('\"', read);	
							printf("\");	
						}
					}
					c = fgetc(read);	
				}
			}
		}
		if (c == ';')
		{
			fputc(c, write);	
			printf("%c", c);	
			c = fgetc(read);

			if (c == '\n')
				if ((c = fgetc(read)) == '\t')
					if ((c = fgetc(read)) == 'e')
						if ((c = fgetc(read)) == 'l')
							if ((c = fgetc(read)) == 's')
								if ((c = fgetc(read)) == 'e')
								{
									fseek(read, -6, SEEK_CUR);	
									continue;	
								}
								else fseek(read, -6, SEEK_CUR);	
							else fseek(read, -5, SEEK_CUR);	
						else fseek(read, -4, SEEK_CUR);	
					else fseek(read, -3, SEEK_CUR);	
				else fseek(read, -2, SEEK_CUR);
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}	
			else fseek(read, -1, SEEK_CUR);

			if (count % r == 0)
			{
				i = rand() % 3 + 1;	
				switch (i)
				{
				case 1:
				{
					trash = fopen("trash1.txt", "r");	
					break;	
				}
				case 2:
				{
					trash = fopen("trash2.txt", "r");	
					break;	
				}
				case 3:
				{
					trash = fopen("trash3.txt", "r");	
					break;	
				}
				case 4:
				{
					trash = fopen("trash4.txt", "r");	
					break;	
				}
				}

				int sz = razm(trash);	
				for (int j = 0; j < sz; j++)
				{
					char h = fgetc(trash);	
					if (h == 'я') break;
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}	
					fputc(h, write);	
					printf("%c", h);	
				}
			}
			count++;	
			continue;	
		}
		fputc(c, write);	
		printf("%c", c);	
		c = fgetc(read);}
	}
}

int main()
{
	config();

	if (space == 0 && com == 0 && change == 0 && trash == 0)
	{
		printf("Nothing changed!\n");	
		return 0;}
	}

	nam = (list*)malloc(sizeof(list));n
	nam = NULL;F
	FILE* read, * write;
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}c
	char in[] = "obfus.c", file[10] = { '\0' }, out[10] = { "out.c" };r
	read = fopen(in, "r");i
	if (read == NULL)
	{
		printf("Error");	
		return 0;}
	}

	if (trash)
	{
		write = fopen(out, "w");	
		addtrash(read, write);	
		fclose(read);  fclose(write);	
		if (space || com || change)
		{
			strcpy(in, out);	
			strcpy(out, "out1.c");	
		}
	}

	if (space || com)
	{
		read = fopen(in, "r");	
		write = fopen(out, "w");	
		spaces(read, write);
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}	
		fclose(read);  fclose(write);	
		if (change)
		{
			strcpy(in, out);	
			strcpy(out, "out2.c");	
		}
	}

	if (change)
	{
		read = fopen(in, "r");	
		write = fopen(out, "w");	
		for (int i = 0; i < 8; i++)
			poisk(read, ops[i]);	
		list* names;	
		names = (list*)malloc(sizeof(list));	
		names = nam;	
		rewind(read);	
		names = allsearch(read, names);	
		sort_nodes(names);
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}	
		rewind(read);	
		repl(read, write, names);	
		fclose(read);  fclose(write);}
	}

	if (strstr(out, "out2"))
	{
		remove("out.c");	
		remove("out1.c");}
	}
	if (strstr(out, "out1"))
		remove("out.c");p
	printf("File is %s\n", out);

	return 0;}
}