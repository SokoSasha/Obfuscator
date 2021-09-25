#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char ops[8][7] = { "int", "void", "float", "double", "char", "FILE", "long", "short" };
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };
int space, com, trash, change;
typedef struct str
{
	int value;
	char name[20];
	char rena[10];
	struct str* next;
} list;
list* nam;
void spaces(FILE* read, FILE* write)
{
	char c;
	while (1)
	{
		c = fgetc(read);
		if (c == 'я')
		{
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
			if (feof(read)) break;
			else fseek(read, -1, SEEK_CUR);
		}

	comm:
		if (com)
		{
			if (c == '/')
			{
				c = fgetc(read);
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
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}
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
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };
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
						}
						if (c == '\n' || feof(read))
						{
							if (c == '\n')
								fputc('\n', write);
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}
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
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}
					}
					else
					{
						fseek(read, -1, SEEK_CUR);
						c = fgetc(read);
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
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}
				} while (c != '\n');
			}

			if (c != '\t' && c != '\n')
				fputc(c, write);
		}

		if (!space)
			fputc(c, write);
	}

}

unsigned long long razm(FILE* read)
{
	unsigned long long sz = 0;
	fseek(read, 0L, SEEK_END);
	sz = ftell(read);
	rewind(read);
	return sz;
}

char* c_to_text(FILE* read)
{
	unsigned long long sz = razm(read), i;
	char* c = (char*)malloc(sz * sizeof(char));
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}
	for (i = 0; i < sz; i++)
	{
		if (feof(read)) break;
		c[i] = fgetc(read);
	}

	while (c[i] != '}')
	{
		c[i] = '\0';
		i--;
	}

	return c;
}

int check(char c)
{
	if ((c > 47 && c < 57) || (c > 64 && c < 91) || (c > 96 && c < 123) || c == '_' || c == '\\' || c == '.')
		return 0;
	else return 1;
}

char* renaming(int i)
{
	srand(time(NULL) * i);
	int len = rand() % 10 + 1;
	unsigned char new[11] = { '\0' };
	for (int i = 0; i < len; i++)
	{
		int h;
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}
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
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}
			break;
		}
		case 2:
		{
			new[i] = rand() % 10 + 48;
			break;
		}
		}
	}

	return new;
}

int code(char ch[])
{
	int d = 0;
	for (int i = 0; i < strlen(ch); i++)
	{
		d += ch[i] * (i + 1);
	}

	return d;
}

list* Add(list* n, char ch[], int i)
{
	list* node;
	node = (list*)malloc(sizeof(list));
	memset(node->name, 0, sizeof(node->name));
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };
	strcat(node->name, ch);
	memset(node->rena, 0, sizeof(node->rena));
	strcat(node->rena, renaming(code(ch)));
	node->value = i;
	node->next = n;
	return node;
}

list* new_node(int val, list* last) {
	list* n;
	if ((n = (list*)malloc(sizeof(list))) == NULL)
		return NULL;
	n->value = val;
	n->next = NULL;
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}
	if (last)
		last->next = n;
	return n;
}

list* min_node(list* n) {
	list* minNode = n;
	while (n->next)
	{
		if (n->value < minNode->value)
			minNode = n;
		n = n->next;
	}
	return minNode;
}

void swap_vals(list* a, list* b)
{
	list* val;
	val = (list*)malloc(sizeof(list));
	val->value = a->value;
	memset(val->name, 0, sizeof(val->name));
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };
	strcat(val->name, a->name);
	memset(val->rena, 0, sizeof(val->rena));
	strcat(val->rena, a->rena);
	a->value = b->value;
	memset(a->name, 0, sizeof(a->name));
	strcat(a->name, b->name);
	memset(a->rena, 0, sizeof(a->rena));
	strcat(a->rena, b->rena);
	b->value = val->value;
	memset(b->name, 0, sizeof(b->name));
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };
	strcat(b->name, val->name);
	memset(b->rena, 0, sizeof(b->rena));
	strcat(b->rena, val->rena);
}

void sort_nodes(list* n)
{
	list* p = n;
	list* minNode;
	while (p->next)
	{
		if ((minNode = min_node(p)) != p)
			swap_vals(p, minNode);
		p = p->next;
	}
}

void print_nodes(const list* n)
{
	list* p = n;
	//printf("%d : %s -> %s\n", p->value, p->name, p->rena);
	while (p->next)
	{
		//	p = p->next;
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}
		printf("%d : %s -> %s\n", p->value, p->name, p->rena);
		p = p->next;
	}
}

void delete_nodes(list* n) {
	list* t;
	while (n) {
		t = n->next;
		free(n);
		n = t;
	}
}

void poisk(FILE* read, char op[])
{
	char* c = c_to_text(read);
	char* p, * q, name[20];
	int i;
	q = c;
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}
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
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}
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
			}

			if (strcmp(name, "main"))
				nam = Add(nam, name, i - strlen(name) + strlen(op));
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}
			if (c[i + strlen(op)] == '[' || c[i + strlen(op)] == ' ' || c[i + strlen(op)] == '=' || c[i + strlen(op)] == ',')
			{
				while (c[i + strlen(op)] != ',' && c[i + strlen(op)] != ';' && c[i + strlen(op)] != ')') i++;
				if (c[i + strlen(op) - 1] == ',') goto name;
			}
		}
		q = p + 1;
	}

}

list* Addall(list* n, char ch[], char re[], int i)
{
	list* node, * check;
	check = (list*)malloc(sizeof(list));
	check = n;
	while (check->next)
	{
		if (check->value == i)
			return n;
		check = check->next;
	}
	node = (list*)malloc(sizeof(list));
	memset(node->name, 0, sizeof(node->name));
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}
	strcat(node->name, ch);
	memset(node->rena, 0, sizeof(node->rena));
	strcat(node->rena, re);
	node->value = i;
	node->next = n;
	return node;
}

list* allsearch(FILE* read, list* names)
{
	list* node;
	node = (list*)malloc(sizeof(list));
	node->next = NULL;
	char* c = c_to_text(read);
	while(1)
	{
		int osadn = 1;
		char psaodj[30] = { '\0' };
		osadn++;
		psaodj[osadn] = 't';
		if (osadn == 2)
			break;
	}
	char* p, * q, name[20];
	int i;
	q = c;
	while ((p = strstr(q, names->name)) != NULL)
	{
		i = strstr(q, names->name) - c;
		if (check(c[i - 1]) == 1 && check(c[i + strlen(names->name)]) == 1)
			node = Addall(node, names->name, names->rena, i);
		q = p + 1;
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
	for(int zln = 75; zln < 70; zln++)
	{
		char paox[] = { "oacponpasd" };
		float ashdb685 = 5413.58651;
		int osfpoaifbi = 894651;
	}
			q = p + 1;
		}

	}
	return node;
}

void repl(FILE* read, FILE* write, list* n)
{
	char c;
	int pl = 0, sz = razm(read);
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
		fputs(n->rena, write);
		n = n->next;
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
		fputc(c, write);
	}
}

void config()
{
	FILE* conf = fopen("conf.txt", "r");
	unsigned long long sz = razm(conf), i;
	char jlaiajn[] = { "iaubsnpigavihbo876876fvoaugsbd[asikn[PBI" };
	char* txt = (char*)malloc(sz * sizeof(char));
	for (i = 0; i < sz; i++)
	{
		if (feof(conf)) break;
		txt[i] = fgetc(conf);
	}
	if (strstr(txt, "SpacesOff=1"))
		space = 1;
	else space = 0;
	if (strstr(txt, "CommentsOff=1"))
		com = 1;
	else com = 0;
	if (strstr(txt, "ChangeNames=1"))
		change = 1;
	else change = 0;
	if (strstr(txt, "AddTrash=1"))
		trash = 1;
	else trash = 0;
	fclose(conf);
}

void addtrash(FILE* r