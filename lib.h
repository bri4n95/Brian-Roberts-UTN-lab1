#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {

	int size;
	int ressize;
	
	int* elements;

	void (*add)();
	void(*removess)();
	void (*set)();
	void(*push)();
	
	struct ArrayList(*pop)();
	struct ArrayList*(*clone)();
	struct ArrayList*(*subList)();
	struct ArrayList(*get)();
	
	int(*indexOf)();
	int(*sizee)();
	int(*contains)();
	int(*containsAll)();
	int(*isEmpty)();
	
	
}ArrayList;

ArrayList* newArrayList();
int entraNumero();
int get(ArrayList* , int);
void add(ArrayList* ,int* );
void resizeUp(ArrayList* );
void removess(ArrayList* ,int );
int validarIndex(int );
void set(ArrayList* ,int ,void*);
void deleteArrayList(ArrayList*);
void push(ArrayList*,int,void*);
ArrayList* pop(ArrayList* , int );
int indexOf(ArrayList* ,void* );
void mostrarIndexOf(int index,int size);
int sizee(ArrayList*);
int contains(ArrayList*,void*);
int containsAll(ArrayList*,ArrayList*);
int isEmpty(ArrayList* );
ArrayList* clone(ArrayList*);
ArrayList* subList(ArrayList* ,int ,int );
void clear(ArrayList*);

ArrayList* newArrayList(){
	ArrayList* pAuxArrayList;
	
	pAuxArrayList = (ArrayList*) malloc(sizeof(ArrayList));
	pAuxArrayList->elements =(int*)malloc(sizeof(int)*10);
	pAuxArrayList->size=0;
	pAuxArrayList->ressize=0;
	
	

	pAuxArrayList->add = add;
	pAuxArrayList->removess=removess;
	pAuxArrayList->set=set;
	pAuxArrayList->push =push;
	
	pAuxArrayList->indexOf=indexOf;
	pAuxArrayList->sizee=sizee;
	pAuxArrayList->contains=contains;
	pAuxArrayList->containsAll=containsAll;
	pAuxArrayList->isEmpty=isEmpty;
	pAuxArrayList->clone=clone;
	pAuxArrayList->subList=subList;
	
	return pAuxArrayList;

}
int entraNumero(){
	int aux;
	printf("\nIngrese un numero--> ");
	scanf("%d",&aux);
	return aux;	
}
int get(ArrayList* pArray,int index){
	return pArray->elements[index];
}
void add(ArrayList* pArray,int* aux){
	pArray->elements[pArray->size]=*aux;
	pArray->size++;
	pArray->ressize++;
	
	if(pArray->ressize==10)
	{
		resizeUp(pArray);
		pArray->ressize=0;	
	}

}
void resizeUp(ArrayList* pArray){
	int* resup;
    resup = realloc(pArray->elements,(sizeof(int))*((pArray->size)+10));
    pArray->elements = resup;	
}

void deleteArrayList(ArrayList* pArray){
	free(pArray);	
}
int validarIndex(int size){
	int index;
	
	do{
		printf("Indique el indice del numero= \n");
		scanf("%d",&index);
		if((index<0)||(index>size)){
		printf("Indice no encotrado\n");
		}
	}while((index<0)||(index>size));
	return index;
}
void set(ArrayList* pArray,int index,void* element){
	pArray->elements[index]=*((int*)element);//primero lo paso a int, lo casteo y despues con el otro * tomo el valor de esa posicion
}
int indexOf(ArrayList* pArray,void* element){
	
	
	int i;
	for(i=0;i<pArray->size;i++){
		if(pArray->elements[i]==*((int*)element)){
			return i;
		}
	}
	return i+1;
}
/*void removess(ArrayList* pArray,int index){
	void*borrar;
	int i;
	borrar=(int*)pArray->elements[0];
	for(i=index;i>=0;i--){
		pArray->elements[i]=pArray->elements[i-1];
	}
	pArray->elements=&pArray->elements[1];//empieza a contar de 1, mi cero pasa a ser 1
	free(borrar);
	pArray->size--;
}*/
void removess(ArrayList* pArray,int index){
    
	int i;
	for(i=index;i<pArray->size;i++){
		pArray->elements[i]=pArray->elements[i+1];
	//	if(i==pArray->size)
    //{break;}
	}
	pArray->size--;
}

void push(ArrayList* pArray ,int index ,void* elements){
int i;
	
	for(i=pArray->size;i>=0;i--)
	{
		//printf("%d\n",i);
		if(i>=index){
			pArray->elements[i]=pArray->elements[i-1];
		}
		//printf("%d\n",self->pElements[i]);
		if(i==index){
		pArray->elements[i]=*((int*)elements);
			resizeUp(pArray);
			break;
		}	
	}
}
ArrayList* pop(ArrayList* pArray,int index){
	void* a;

	a=(ArrayList*)pArray->elements[index];

	removess(pArray,index);
	return a;
}
void mostrarIndexOf(int index,int size){
	if(index<size){
		printf("El indice  es %d\n",index);
	}else{
		printf("El indice no fue encotrado\n");
		}
}
int sizee(ArrayList* pArray){
	return pArray->size;	
}
int contains(ArrayList* pArray,void* element){
	int i;
	for(i=0;i<pArray->size;i++){
		if(pArray->elements[i]==*((int*)element)){
			return 1;}
		}return 0;
}
int containsAll(ArrayList* pArray ,ArrayList* pArray2){
	int i,x,ban=0;
	
	for(x=0;x<pArray2->size;x++){
		for(i=0;i<pArray->size;i++)	{
			if(pArray2->elements[x]==pArray->elements[i]){
			ban++;
			break;}
			
			}
		
			}
			if(pArray2->size==ban)
			{return 1;
			}
			return 0;
			
	
	
}
int isEmpty(ArrayList* pArray){
	if(pArray->size==0)
	{return 0;}return 1;
	
}
ArrayList* clone(ArrayList* pArray){
	return pArray;
}
ArrayList* subList(ArrayList* pArray,int from,int to){
	ArrayList* lista;
	lista=newArrayList();
	int i, d=0,*aux;
	for(i=from;i<=to;i++){
		//lista->pElements[lista->size]=self->pElements[i];
		*aux=pArray->elements[i];
		add(lista,aux);
	}
	return lista;
}
void clear(ArrayList* pArray){
	free(pArray);
	
}
