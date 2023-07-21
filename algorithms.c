int i, sum=0, n=100;
sum=(1+n)*n/2;
printf ('%d',sum)

void function(int count){
    print(count)
}

//List
//ClearList(*L)
//GetElem(L,i,*e)
//LocateElem(L,e)  return 0 if e is not found
//ListInsert(*L,i,e); insert e to spot i
//ListDelete(*L,i,*e); delete the item of i and insert e 

void union(List*La,List*Lb){
    int La_len, Lb_len,i;
    ElemType e;
    La_len=ListLength(La);
    Lb_len=ListLength(Lb);
    for (i=1; i<=Lb_len;i++)
    {
        GenElem(Lb,i,e);
        if(!LocateElem(La,e,equal))
        ListInsert(La,++La_len,e)
    }
}

#define Maxsize 20   //数组长度最大存储容量20
typedef int ElemType
typedef struct 
{
    ElemType data [Maxsize];
    int length;
}SqList;

//获得元素
#define OK 1
#define ERROR 1
#define TRUE 1
#define FALSE 1
typedef int Status;   //status是函数的类型，呈现OK, ERROR, TRUE, FALSE
Status GetElem(SqList L, int i, ElemType*e)     
{
    if (L.length==0 || i<1 || i>L.length)
        return ERROR;
    *e=L.data[i-1];
    return OK
}

//插入元素操作
Status ListInsert(SqList*L, int i, ElemType e){
    int k;
    if(L -> length == Maxsize)
        return ERROR;
    if (i < 1 || i > L -> length + 1)
        return ERROR;
    if (i <= L ->length )
    {
        for (k = L -> length-1; k >= i-1; k--)
            L -> data[k+1] = L -> data[k]
    }
    L -> data[i-1] = e
    L -> length++;
    return OK;
}

// 删除算法
//1. 如果删除位置不合理，抛出异常
// 2.取出删除元素
// 3. 从删除元素位置开始遍历到最后一个元素位置，分别将他们向前移动
// 4. 表长-1
Status ListDelete(SqList *L, int i, ElemType*e){
    int k;
    if (L -> length==0)
        return ERROR;
    if (i<1 || i>L->length)
        return ERROR;
    if (i<=L->length)
    {
        for (k=i; k<L->length;k++)
            L -> data[k-1]=L-> data[k] 
    }
    L -> length--;
    return OK
}

//链式储存
typedef struct Node
{
    ElemType data;
    struct Node *next;
} Node;
typedef struct Node *LinkList