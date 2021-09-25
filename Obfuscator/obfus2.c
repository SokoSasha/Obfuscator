#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char ops[8][7] = { "int", "void", "float", "double", "char", "FILE", "long", "short" };
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

void addtrash(FILE* read, FILE* write)
{
	srand(time(NULL));
	FILE* trash = fopen("trash1.txt", "r");
	int i, r = 6/*rand() % 10 + 5*/, count = 0;
	char c;
	while (!feof(read))
	{
		c = fgetc(read);
		if (c == 'я')
		{
			c = fgetc(read);
			if (feof(read)) break;
			else fseek(read, -1, SEEK_CUR);
		}
		if (c == '(')
		{
			int ct = 1;
			while (ct != 0)
			{
				fputc(c, write);
				c = fgetc(read);
				if (c == '(') ct++;
				if (c == ')') ct--;
			}
		}
		if (c == '\"')
		{
			fputc(c, write);
			c = fgetc(read);
			while (c != '\"')
			{
				fputc(c, write);
				c = fgetc(read);
			}
		}
		if (c == ';')
		{
			fputc(c, write);
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
					fputc(h, write);
				}
			}
			count++;
			continue;
		}
		fputc(c, write);
	}
}

int main()
{
	config();

	if (space == 0 && com == 0 && change == 0 && trash == 0)
	{
		printf("Nothing changed!\n");
		return 0;
	}

	nam = (list*)malloc(sizeof(list));
	nam = NULL;
	FILE* read, * write;
	char in[] = "Baza.c", file[10] = { '\0' }, out[10] = { "out.c" };
	read = fopen(in, "r");
	if (read == NULL)
	{
		printf("Error");
		return 0;
	}

	if (trash)
	{
		write = fopen(out, "w");
		addtrash(read, write);
		fclose(read); fclose(write);
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
		fclose(read); fclose(write);
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
		rewind(read);
		repl(read, write, names);
		fclose(read); fclose(write);
	}

	if (strstr(out, "out2"))
	{
		remove("out.c");
		remove("out1.c");
	}
	if (strstr(out, "out1"))
		remove("out.c");
	printf("File is %s\n", out);

	return 0;
}