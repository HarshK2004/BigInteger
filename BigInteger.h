#ifndef BigInteger_h
#define BigInteger_h

struct node{
	int data;
	struct node *next;
};

struct BigInteger{
	struct node *head;
	int l,sign;
};

void print(struct node);
struct BigInteger initialize(char[]);
struct BigInteger insert(struct BigInteger,int);
struct BigInteger add(struct BigInteger,struct BigInteger);
struct BigInteger sub(struct BigInteger,struct BigInteger);

struct BigInteger mul(struct BigInteger,struct BigInteger);
struct BigInteger div1(struct BigInteger,struct BigInteger);
struct BigInteger insert2(struct BigInteger,int);
struct BigInteger initialize2(char[]);
struct BigInteger rev(struct BigInteger);
struct BigInteger modadd(struct BigInteger,struct BigInteger);
struct BigInteger truncate(struct BigInteger);
int compare(struct BigInteger,struct BigInteger);
char convert(struct BigInteger);
int length(struct BigInteger);

#endif

