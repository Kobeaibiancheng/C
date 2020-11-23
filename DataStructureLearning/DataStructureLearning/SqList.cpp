#include<iostream>
using namespace std;

#define MaxSize 50


//��̬˳���
typedef struct{
	int arr[MaxSize];
	int length;
}SqList;

//˳������Ԫ�ص�λ��Ϊi��λ��
bool ListInsert(SqList &L, int i, int e) {
	if (i < 1 || i > L.length + 1) {
		return false;
	}
	for (int j = L.length; j >= i; j--) {
		L.arr[j] = L.arr[j - 1];
	}
	L.arr[i - 1] = e;
	L.length++;
	return true;
}

//ɾ��˳���λ��Ϊi��Ԫ��
bool ListDelete(SqList &L, int i, int &e) {
	if (i < i || i > L.length){
		return false;
	}
	e = L.arr[i - 1];
	for (int j = i - 1; j < L.length; j++) {
		L.arr[j] = L.arr[j + 1];
	}

	L.length--;
	return true;
}

//��λ����
int GetElem(SqList &L, int i) {
	if (i < 1 || i > L.length) {
		return -1;
	}
	return L.arr[i - 1];
}

//��ֵ����(˳�����)
int LocateElem(SqList &L, int e) {
	for (int i = 0; i < L.length; i++) {
		if (L.arr[i] == e) {
			return i;
		}
	}
	return -1;
}

//��ӡ˳���
void display(SqList &L) {
	for (int i = 0; i < L.length; i++) {
		cout << L.arr[i] << endl;
	}
}


/*int main() {
	SqList L;
	int e = -1;
	L.length = 0;
	ListInsert(L, 1, 5);
	ListInsert(L, 2, 6);
	ListInsert(L, 3, 7);
	ListInsert(L, 4, 8);
	ListInsert(L, 5, 9);
	ListInsert(L, 6, 10);
	ListInsert(L, 1, 4);
	ListInsert(L, 3, 3);



	ListDelete(L, 1, e);
	cout << "" << endl;
	//system("pause");
	return 0;
}*/