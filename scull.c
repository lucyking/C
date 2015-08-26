#include <stdio.h>
#include <stdlib.h>

struct scull_qset{
	void **data;
	int *p;
	struct scull_qset *next;
};

struct scull_dev {
	struct scull_qset *data;
	int quantum;
};

int main(){
	struct scull_dev *dev;
	int i,j,**p,*a,*b;
	double k=1.234;
	i=101,j=202;
	p=malloc(1000);
	p[0]=&j;
	p[1]=&i;
	a=&i;
	p[2]=a;
	p[3]=&j;
	dev=malloc(sizeof(struct scull_dev));
	dev->data=(struct scull_qset *)malloc(sizeof(struct scull_qset));
	printf("%p\n",p[0]);
	printf("%p\n",p);
	printf("%d\n",*p[3]);
	printf("%lf\n",k);
	//sleep(30);

	return 0;
}
